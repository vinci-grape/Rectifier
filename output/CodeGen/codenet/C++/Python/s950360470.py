def mod_nCk(n, k, mod):
    if n == 0 or k == 0:
        return 1
    p = 1
    q = 1
    for i in range(n - k + 1, n + 1):
        p = (p * i) % mod
    for i in range(2, k + 1):
        q = (q * i) % mod
    q = mod_inv(q, mod)
    return (p * q) % mod

def mod_inv(a, mod):
    if a == 0:
        return 0
    return mod_pow(a, mod - 2, mod)

def mod_pow(a, n, mod):
    if n == 0:
        return 1
    if n == 1:
        return a
    if n % 2 == 0:
        return mod_pow(a, n / 2, mod) * mod_pow(a, n / 2, mod) % mod
    else:
        return mod_pow(a, n / 2, mod) * mod_pow(a, n / 2, mod) * a % mod

n = int(raw_input())
k = int(raw_input())
mod = int(raw_input())
print mod_nCk(k, n, mod)