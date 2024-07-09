def init():
    fac = [1]
    finv = [1]
    inv = [1]
    for i in range(2, NMAX):
        fac.append(fac[-1] * i % mod)
        inv.append(mod - inv[-1] * (mod / i) % mod)
        finv.append(finv[-1] * inv[-1] % mod)
    return fac, finv, inv

def C(n, k):
    if n < k:
        return 0
    if n < 0 or k < 0:
        return 0
    return fac[n] * (finv[k] * finv[n - k] % mod) % mod

def main():
    X, Y = map(int, raw_input().split())
    if (X + Y) % 3!= 0:
        print 0
        return
    n = (X + Y) / 3 + 1
    k = 2 * (n - 1) - Y + 1
    print C(n - 1, k - 1)

if __name__ == '__main__':
    main()