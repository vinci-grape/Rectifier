class Edge:
    def __init__(self, id, to):
        self.id = id
        self.to = to

def dfs(to, color, parents):
    k = 1
    for e in g[to]:
        if e.to == parents:
            continue
        if k == color:
            k += 1
        ans[e.id] = k
        dfs(e.to, k, to)
        k += 1

n = int(input())
g = [[] for _ in range(n)]

for _ in range(n - 1):
    a, b = map(int, input().split())
    g[a - 1].append(Edge(_, b - 1))
    g[b - 1].append(Edge(_, a - 1))

ans = [0] * (n - 1)
dfs(0, -1, -1)

max_val = max(ans)
print(max_val)

for c in ans:
    print(c)