def dfs(v):
    used[v] = True
    grundy[v] = 0
    for i in range(len(G[v])):
        if not used[G[v][i]]:
            dfs(G[v][i])
            grundy[v] ^= (grundy[G[v][i]] + 1)

N = int(input())
G = [[] for _ in range(N)]
used = [False] * N
grundy = [0] * N

for _ in range(N - 1):
    x, y = map(int, input().split())
    x -= 1
    y -= 1
    G[x].append(y)
    G[y].append(x)

dfs(0)

if grundy[0] != 0:
    print("Alice")
else:
    print("Bob")