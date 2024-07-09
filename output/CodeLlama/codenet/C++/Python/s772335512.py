import sys

sys.setrecursionlimit(100000)

N = int(input())
G = [[] for _ in range(N)]
used = [False] * N
grundy = [0] * N

def dfs(v):
    used[v] = True
    grundy[v] = 0
    for i in range(len(G[v])):
        if not used[G[v][i]]:
            dfs(G[v][i])
            grundy[v] ^= (grundy[G[v][i]]+1)

dfs(0)
if grundy[0] != 0:
    print("Alice")
else:
    print("Bob")