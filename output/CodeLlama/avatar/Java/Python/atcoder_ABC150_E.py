import sys

n = int(sys.stdin.readline())
c = list(map(int, sys.stdin.readline().split()))
mod = 1000000007
if n == 1:
    print(c[0] * 2 % mod)
    sys.exit(0)
c.sort()
b = pow(2, n)
a = pow(2, n - 2)
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