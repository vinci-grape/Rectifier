import queue

n = int(input())
g = [[0] * (n+1) for _ in range(n+1)]

for _ in range(n):
    u, k, *edges = map(int, input().split())
    for v in edges:
        g[u][v] = 1

d = [-1] * (n+1)
que = queue.Queue()
que.put(1)
d[1] = 0

while not que.empty():
    top = que.get()
    for j in range(1, n+1):
        if g[top][j] == 1 and d[j] == -1:
            que.put(j)
            d[j] = d[top] + 1

for i in range(1, n+1):
    print(i, d[i])