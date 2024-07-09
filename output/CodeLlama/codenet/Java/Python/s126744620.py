import sys

n, k = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))
x = [0] * 200010
for i in range(n):
    x[a[i] - 1] += 1
x.sort()
ans = 0
for i in range(200010 - k - 1):
    ans += x[i]
print(ans)