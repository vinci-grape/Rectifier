MOD = 10**9 + 7

# a^n
def pow(a, n):
    res = 1
    while n > 0:
        if n & 1:
            res *= a
        a *= a
        n >>= 1
    return res

# a^n % mod
def mod_pow(a, n, mod):
    res = 1
    while n > 0:
        if n & 1:
            res = res * a % mod
        a = a * a % mod
        n >>= 1
    return res

# a^(-1) % mod (only if : a % p != 0)
def mod_inv(a, mod):
    return mod_pow(a, mod - 2, mod)

# nCk % mod
def mod_nCk(n, k, mod):
    if n == 0 or k == 0:
        return 1
    p = 1
    q = 1
    for i in range(n - k + 1, n + 1):
        p = (p * i) % MOD
    for i in range(2, k + 1):
        q = (q * i) % MOD
    q = mod_inv(q, MOD)
    return (p * q) % MOD

n, k = map(int, input().split())
print(mod_nCk(k, n, MOD))