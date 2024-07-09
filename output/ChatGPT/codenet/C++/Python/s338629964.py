MOD = 998244353

def init():
    fact = [0] * 1100000
    revfact = [0] * 1100000
    rev = [0] * 1100000

    m = MOD
    fact[0] = 1
    revfact[0] = 1
    rev[0] = 0
    rev[1] = 1
    for i in range(1, 1100000):
        fact[i] = fact[i-1] * i % m
        if i > 1:
            rev[i] = MOD // i * (MOD - rev[MOD % i]) % MOD
        revfact[i] = revfact[i-1] * rev[i] % MOD

    return fact, revfact, rev

def nCk(n, k, fact, revfact):
    if n < k:
        return 0
    res = fact[n] * revfact[n-k] % MOD * revfact[k] % MOD
    return res

def mod_pow(x, a, m = MOD):
    if a == 0:
        return 1
    res = mod_pow(x, a // 2, m)
    res = res * res % m
    if a % 2:
        res *= x
    return res % m

def inv(x, m = MOD):
    return mod_pow(x, m-2, m)

def solve():
    fact, revfact, rev = init()
    n = int(input())
    a = [0] * n
    b = [0] * n
    aall = 0
    ball = 0
    for i in range(n):
        a[i], b[i] = map(int, input().split())
        aall += a[i]
        ball += b[i]

    dp = [[[[0 for _ in range(2)] for _ in range(2)] for _ in range(440)] for _ in range(440)]
    dp[0][0][0][0] = 1
    for i in range(1, n + 1):
        for asum in range(aall, -1, -1):
            for cnt in range(ball + 1):
                for p in range(2):
                    if asum - a[i-1] < 0:
                        continue
                    pw = 1
                    for use in range(b[i-1]):
                        if cnt - use >= 0:
                            tmp = nCk(cnt, use, fact, revfact) % MOD * pw % MOD
                            dp[asum][cnt][p][0] += dp[asum-a[i-1]][cnt-use][p^1][0] * tmp % MOD
                            dp[asum][cnt][p][1] += dp[asum-a[i-1]][cnt-use][p^1][1] * tmp % MOD
                        else:
                            break
                        pw = pw * a[i-1] % MOD
                    if cnt - b[i-1] + 1 >= 0:
                        dp[asum][cnt][p][1] += dp[asum-a[i-1]][cnt-b[i-1]+1][p^1][0] * nCk(cnt, b[i-1]-1, fact, revfact) % MOD * pw % MOD
                    dp[asum][cnt][p][0] %= MOD
                    dp[asum][cnt][p][1] %= MOD

    ans = 0
    for asum in range(aall+1):
        rev_asum_pow = 1
        for cnt in range(ball+1):
            rev_asum_pow = rev_asum_pow * rev[asum] % MOD
            for p in range(2):
                x = dp[asum][cnt][p][1] * rev_asum_pow % MOD * (cnt+1) % MOD * aall % MOD * rev[asum] % MOD
                if p == 1:
                    ans += x
                else:
                    ans -= x
                ans %= MOD
    if ans < 0:
        ans += MOD
    print(ans)

solve()