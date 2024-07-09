import sys
n, m = map(int, sys.stdin.readline().split())
req = []
pre = []
for i in range(n):
    req.append(int(sys.stdin.readline()))
for i in range(m):
    pre.append(int(sys.stdin.readline()))
i = n - 1
j = m - 1
ans = 0
while i >= 0 and j >= 0:
    if req[i] > pre[j]:
        ans += 1
    else:
        j -= 1
    i -= 1
print(ans + i + 1)