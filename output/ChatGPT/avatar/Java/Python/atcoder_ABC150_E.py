import sys

def power(x, n):
    if n == 0:
        return 1
    mod = 1000000007
    val = power(x, n // 2)
    val = val * val % mod
    if n % 2 == 1:
        val = val * x % mod
    return val

def main():
    sa = sys.stdin.readline().split()
    n = int(sa[0])
    sa = sys.stdin.readline().split()
    c = [int(x) for x in sa]
    mod = 1000000007
    if n == 1:
        print(c[0] * 2 % mod)
        return
    c.sort()
    b = power(2, n)
    a = power(2, n - 2)
    ans = 0
    for i in range(2, n + 2):
        val = a * i % mod
        val *= c[n + 1 - i]
        val %= mod
        ans += val
        ans %= mod
    ans *= b
    ans %= mod
    print(ans)

if __name__ == "__main__":
    main()