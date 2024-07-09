import sys

N = int(raw_input().strip())
G = [[] for i in range(N)]
used = [False for i in range(N)]
grundy = [0 for i in range(N)]

for i in range(N-1):
    x, y = [int(j) for j in raw_input().strip().split()]
    x -= 1
    y -= 1
    G[x].append(y)
    G[y].append(x)

def dfs(v):
    used[v] = True
    grundy[v] = 0
    for i in G[v]:
        if not used[i]:
            dfs(i)
            grundy[v] ^= (grundy[i]+1)

dfs(0)
if grundy[0]!= 0:
    print "Alice"
else:
    print "Bob"