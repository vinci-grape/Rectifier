import sys
import math

n = int(sys.stdin.readline())

node = []
for i in range(1, n + 1):
    x, y = map(int, sys.stdin.readline().split())
    node.append((x, y, i))

e = []
for i in range(1, n):
    e.append((node[i - 1][2], node[i][2], node[i][0] - node[i - 1][0]))
for i in range(1, n):
    e.append((node[i - 1][2], node[i][2], node[i][1] - node[i - 1][1]))

e.sort(key = lambda x: x[2])

par = [i for i in range(n + 1)]

def findpar(x):
    if par[x] == x:
        return x
    else:
        return findpar(par[x])

def unite(x, y):
    x = findpar(x)
    y = findpar(y)
    if x == y:
        return
    par[x] = y

ans = 0
for i in range(len(e)):
    u, v, val = e[i]
    if findpar(u) == findpar(v):
        continue
    unite(u, v)
    ans += val

print(ans)