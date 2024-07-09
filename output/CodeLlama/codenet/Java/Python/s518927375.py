import sys

k, a, b = map(int, sys.stdin.readline().split())

if b <= a + 2:
    print(1 + k)
    sys.exit()

x = k - (a - 1)
ans = a + (x // 2) * (b - a) + (x % 2)

print(ans)