import sys
from collections import defaultdict

def dfs(x, p, r, l):
    U[0][x] = p
    R[x] = r
    L[x] = l
    for pp in G[x]:
        t = pp[0]
        if t == p: continue
        dfs(t, x, r+1, l+pp[1])

def lca(a, b):
    if R[a] > R[b]: swap(a, b)
    for k in range(MAX_L):
        if (R[a] - R[b]) >> k & 1: b = U[k][b]
    if a == b: return a
    for k in range(MAX_L-1, -1, -1):
        if U[k][a] != U[k][b]:
            a = U[k][a]
            b = U[k][b]
    return U[0][a]

def dist(x, y):
    g = lca(x, y)
    return L[x] + L[y] - 2*L[g]

N = int(sys.stdin.readline())
G = defaultdict(list)
U = [[-1]*N for _ in range(MAX_L)]
R = [0]*N
L = [0]*N
for i in range(N-1):
    a, b, c = map(int, sys.stdin.readline().split())
    a -= 1; b -= 1
    G[a].append([b, c])
    G[b].append([a, c])
for i in range(MAX_L):
    for j in range(N):
        if U[i][j] == -1: U[i+1][j] = -1
        U[i+1][j] = U[i][U[i][j]]

Q, K = map(int, sys.stdin.readline().split())
K -= 1
for i in range(Q):
    x, y = map(int, sys.stdin.readline().split())
    x -= 1; y -= 1
    print(dist(x, K) + dist(K, y))