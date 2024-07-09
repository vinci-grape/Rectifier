import sys
import threading
import time


def dfs(a, c):
    global mujun
    if visited[a]:
        if color[a] >= 0 and color[a] != c:
            mujun = True
        return 0
    visited[a] = True
    color[a] = c
    total = 1
    for b in graph[a]:
        total += dfs(b, 1 - c)
    return total


def run():
    global one, bipartite, count, mujun
    n = int(sys.stdin.readline())
    m = int(sys.stdin.readline())
    graph = [[] for _ in range(n)]
    for _ in range(m):
        u, v = map(int, sys.stdin.readline().split())
        graph[u - 1].append(v - 1)
        graph[v - 1].append(u - 1)
    visited = [False] * n
    color = [-1] * n
    for i in range(n):
        if visited[i]:
            continue
        count += 1
        mujun = False
        kind = dfs(i, 0)
        if kind == 1:
            one += 1
        elif not mujun:
            bipartite += 1
    total = one * (2 * n - one)
    total += (count - one) * (count - one)
    total += bipartite * bipartite
    print(total)


threading.Thread(target=run).start()