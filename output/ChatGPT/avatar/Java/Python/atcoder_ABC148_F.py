import sys

def dfs(u, d, edges):
    for nu in edges[u]:
        if d[nu] == sys.maxsize:
            d[nu] = d[u] + 1
            dfs(nu, d, edges)

if __name__ == "__main__":
    N, u, v = map(int, input().split())
    u -= 1
    v -= 1

    edges = [[] for _ in range(N)]

    for _ in range(N - 1):
        a, b = map(int, input().split())
        a -= 1
        b -= 1
        edges[a].append(b)
        edges[b].append(a)

    d = [sys.maxsize] * N
    d[u] = 0
    dfs(u, d, edges)

    e = [sys.maxsize] * N
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