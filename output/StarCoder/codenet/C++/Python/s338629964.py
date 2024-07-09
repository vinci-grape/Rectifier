import sys
MOD = 1000000007

def init():
    global fact, revfact, rev
    fact = [1]
    revfact = [1]
    rev = [0]
    for i in range(1, 1100000):
        fact.append(fact[-1] * i % MOD)
        if i > 1:
            rev.append(MOD / i * (MOD - rev[MOD % i]) % MOD)
        revfact.append(revfact[-1] * rev[i] % MOD)

def comb(n, k):
    if n < k:
        return 0
    if comb[n][k]!= 0:
        return comb[n][k]
    res = fact[n] * revfact[n-k] % MOD * revfact[k] % MOD
    return comb[n][k] = res

def mod_pow(x, a, m = MOD):
    if a == 0:
        return 1
    res = mod_pow(x, a / 2, m)
    res = res * res % m
    if a % 2:
        res *= x
    return res % m

def inv(x, m = MOD):
    return mod_pow(x, m-2, m)

def aall, ball
n, ans = map(int, raw_input().split())
a = [0] * n
b = [0] * n
aall = 0
ball = 0
for i in range(n):
    a[i], b[i] = map(int, raw_input().split())
    aall += a[i]
    ball += b[i]

dp = [[[[0]*2 for _ in range(2)] for _ in range(ball+1)] for _ in range(aall+1)]
dp[0][0][0][0] = 1
for i in range(1, n+1):
    id = i % 2
    for asum in range(aall+1):
        for cnt in range(ball+1):
            for p in range(2):
                if asum-a[i-1] < 0:
                    continue
                pw = 1
                for use in range(b[i-1]):
                    if cnt-use >= 0:
                        tmp = comb(cnt, use) * pw % MOD
                        dp[asum][cnt][p][0] += dp[asum-a[i-1]][cnt-use][p^1][0] * tmp % MOD
                        dp[asum][cnt][p][1] += dp[asum-a[i-1]][cnt-use][p^1][1] * tmp % MOD
                    else:
                        break
                    pw = pw * a[i-1] % MOD
                if cnt-b[i-1]+1 >= 0:
                    dp[asum][cnt][p][1] += dp[asum-a[i-1]][cnt-b[i-1]+1][p^1][0] * comb(cnt, b[i-1]-1) % MOD * pw % MOD
                dp[asum][cnt][p][0] %= MOD
                dp[asum][cnt][p][1] %= MOD

for asum in range(aall+1):
    rev_asum_pow = 1
    for cnt in range(ball+1):
        rev_asum_pow = rev_asum_pow * rev[asum] % MOD
        for p in range(2):
            x = dp[asum][cnt