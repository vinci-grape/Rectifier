import sys

n, k = map(int, sys.stdin.readline().split())
l = list(map(int, sys.stdin.readline().split()))
l.sort()

ans = 0
for i in range(k):
    ans += l[n - 1 - i]

print(ans)