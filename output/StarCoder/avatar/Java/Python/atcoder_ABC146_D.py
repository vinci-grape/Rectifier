import sys

n = int(sys.stdin.readline())

g = [[] for _ in range(n)]

for i in range(n-1):
    a, b = map(int, sys.stdin.readline().split())
    g[a-1].append(b-1)
    g[b-1].append(a-1)

ans = [-1] * (n-1)

def dfs(to, color, parents):
    k = 1
    for e in g[to]:
        if e == parents:
            continue
        if k == color:
            k += 1
        ans[e] = k
        dfs(e, k, to)
        k += 1

dfs(0, -1, -1)

max = 0
for temp in ans:
    max = max if max > temp else temp

print(max)
for c in ans:
    print(c)