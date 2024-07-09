MOD = 1000000007

def mod_pow(x, n):
    ans = 1
    while n > 0:
        if n & 1 == 1:
            ans = ans * x % MOD
        x = x * x % MOD
        n >>= 1
    return ans

def comb_s(n, r):
    tmp_n = 1
    tmp_d = 1
    ans = 1
    for i in range(1, r+1):
        tmp_n = (tmp_n * (n+1-i)) % MOD
        tmp_d = (tmp_d * i) % MOD
        ans = tmp_n * mod_pow(tmp_d, MOD-2)

    return ans

n, a, b = map(int, input().split())
ans = mod_pow(2, n) - 1

tmp_nd = comb_s(n, a)
ans = (ans - tmp_nd) % MOD

while ans < 0:
    ans += MOD

tmp_nd = comb_s(n, b)
ans = (ans - tmp_nd) % MOD

while ans < 0:
    ans += MOD

print(ans)