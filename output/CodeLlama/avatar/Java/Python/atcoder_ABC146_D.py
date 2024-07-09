import sys

n = int(sys.stdin.readline().rstrip())
g = [[] for _ in range(n)]
for i in range(n - 1):
    a, b = map(int, sys.stdin.readline().split())
    g[a - 1].append((i, b - 1))
    g[b - 1].append((i, a - 1))
ans = [0] * (n - 1)


def dfs(to, color, parents):
    k = 1
    for e in g[to]:
        if e[1] == parents:
            continue
        if k == color:
            k += 1
        ans[e[0]] = k
        dfs(e[1], k, to)
        k += 1


dfs(0, -1, -1)
max_ = 0
for temp in ans:
    max_ = max(max_, temp)
print(max_)
for c in ans:
    print(c)