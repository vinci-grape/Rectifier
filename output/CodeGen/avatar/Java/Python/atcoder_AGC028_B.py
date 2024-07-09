def modinv(a, m):
    b = m
    u = 1
    v = 0
    tmp = 0
    while b > 0:
        t = a // b
        a -= t * b
        tmp = a
        a = b
        b = tmp
        u -= t * v
        tmp = u
        u = v
        v = tmp
    u %= m
    if u < 0:
        u += m
    return u

def atcoder_AGC028_B(n):
    sa = input().split()
    a = [int(i) for i in sa]
    mod = 1000000007
    p = 1
    for i in range(2, n+1):
        p = p * i % mod
    q = [1]
    for i in range(1, n):
        q.append((q[i-1] + modinv(i+1, mod)) % mod)
    ans = 0
    for i in range(0, n):
        val = q[i] + q[n-i-1] - 1
        val *= a[i]
        val %= mod
        val *= p
        val %= mod
        ans += val
        ans %= mod
    print(ans)