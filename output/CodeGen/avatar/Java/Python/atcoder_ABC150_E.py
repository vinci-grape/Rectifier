def main ():
    n = int(input())
    sa = input().split()
    c = [int(sa[i]) for i in range(n)]
    mod = 1000000007
    if n == 1:
        print(c[0] * 2 % mod)
        return
    sa = input().split()
    c = [int(sa[i]) for i in range(n)]
    b = 2 ** n
    a = 2 ** (n - 2)
    ans = 0
    for i in range(2, n + 1):
        val = a * i % mod
        val *= c[n + 1 - i]
        val %= mod
        ans += val
        ans %= mod
    ans *= b
    ans %= mod
    print(ans)