import sys

def power(x, n):
    if n == 0:
        return 1
    val = power(x, n // 2)
    val = val * val
    if n % 2 == 1:
        val = val * x
    return val

def main():
    input = sys.stdin.readline
    MOD = 1000000007
    n = int(input())
    c = list(map(int, input().split()))
    c.sort()
    b = power(2, n)
    a = power(2, n - 2)
    ans = 0
    for i in range(2, n + 1):
        val = a * i % MOD
        val *= c[n + 1 - i]
        val %= MOD
        ans += val
        ans %= MOD
    ans *= b
    ans %= MOD
    print(ans)

if __name__ == '__main__':
    main()