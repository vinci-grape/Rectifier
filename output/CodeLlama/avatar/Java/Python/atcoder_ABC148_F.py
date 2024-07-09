import sys
import collections

def main():
    N = int(sys.stdin.readline().rstrip())
    u = int(sys.stdin.readline().rstrip()) - 1
    v = int(sys.stdin.readline().rstrip()) - 1
    edges = [[] for _ in range(N)]
    for i in range(N - 1):
        a, b = map(int, sys.stdin.readline().rstrip().split())
        a -= 1
        b -= 1
        edges[a].append(b)
        edges[b].append(a)
    d = [float('inf')] * N
    d[u] = 0
    dfs(u, d, edges)
    e = [float('inf')] * N
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


def dfs(u, d, edges):
    for nu in edges[u]:
        if d[nu] == float('inf'):
            d[nu] = d[u] + 1
            dfs(nu, d, edges)


if __name__ == '__main__':
    main()