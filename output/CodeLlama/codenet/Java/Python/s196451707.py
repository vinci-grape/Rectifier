import sys

n = int(sys.stdin.readline())

g = [[0 for i in range(n+1)] for j in range(n+1)]

for i in range(n):
    u = int(sys.stdin.readline())
    k = int(sys.stdin.readline())
    for j in range(k):
        v = int(sys.stdin.readline())
        g[u][v] = 1

d = [-1 for i in range(n+1)]
que = []
que.append(1)
d[1] = 0
while len(que) > 0:
    top = que.pop(0)
    for j in range(1, n+1):
        if g[top][j] == 1 and d[j] == -1:
            que.append(j)
            d[j] = d[top] + 1

for i in range(1, n+1):
    print(i, d[i])