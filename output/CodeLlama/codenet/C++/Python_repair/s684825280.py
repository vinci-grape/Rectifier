import sys

n, k = map(int, sys.stdin.readline().split())
cnt = [0] * (100001)
for i in range(n):
    x = int(sys.stdin.readline())
    cnt[x] += 1
a = []
for i in range(len(cnt)):
    if cnt[i] > 0:
        a.append(cnt[i])
ans = 0
a.sort()
m = len(a) - k
for i in range(m):
    ans += a[i]
print(ans)