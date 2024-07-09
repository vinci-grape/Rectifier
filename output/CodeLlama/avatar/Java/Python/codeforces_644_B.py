import sys

n, b = map(int, sys.stdin.readline().split())
ans = [0] * n
q = []
for i in range(n):
    t, d = map(int, sys.stdin.readline().split())
    while q and q[0] <= t:
        q.pop(0)
    if len(q) <= b:
        ans[i] = q[-1] + d if q else t
        q.append(ans[i])
    else:
        ans[i] = -1
for i in range(n):
    print(ans[i], end=' ')