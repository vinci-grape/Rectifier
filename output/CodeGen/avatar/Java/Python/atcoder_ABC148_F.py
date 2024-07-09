def main(args):
    N = int(input())
    u = int(input()) - 1
    v = int(input()) - 1
    edges = [[] for _ in range(N)]
    for i in range(N - 1):
        a = int(input()) - 1
        b = int(input()) - 1
        edges[a].append(b)
        edges[b].append(a)
    d = [int(i) for i in input().split()]
    for i in range(N):
        if d[i] == int(i) + 1:
            d[i] = 0
    d[u] = 0
    dfs(u, d, edges)
    e = [int(i) for i in input().split()]
    for i in range(N):
        if e[i] == int(i) + 1:
            e[i] = 0
    e[v] = 0
    dfs(v, e, edges)
    q = -1
    for i in range(N):
        if d[i] < e[i]:
            if e[i] > q:
                q = e[i]
    if q <= 0:
        print(0)
    else:
        print(q - 1)