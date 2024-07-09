def f(N):
    a = [0] * 20
    d = 0
    while N > 0:
        a[d] = N % 10
        N //= 10
        d += 1
    m = 1e18
    res = N
    for i in range(d+1):
        bunsi = 0
        bunbo = 9 * i
        for j in range(d-1, -1, -1):
            bunsi *= 10
            if j < i:
                bunsi += 9
            else:
                bunsi += a[j]
            
            if j >= i:
                bunbo += a[j]
            
        frac = bunsi / bunbo
        if frac < m:
            m = frac
            res = bunsi
    return res

K = int(input())
N = f(1)
for i in range(K):
    print(N)
    N = f(N+1)