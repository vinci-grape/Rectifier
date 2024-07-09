from sys import stdin
n, m = map(int, stdin.readline().strip().split())

graph = [[] for i in range(n + 1)]

for i in range(m):
    a, b = map(int, stdin.readline().strip().split())
    graph[a].append(b)
    graph[b].append(a)

def dfs(node, color):
    visited[node] = True
    color[node] = 1
    for i in graph[node]:
        if not visited[i]:
            dfs(i, color)
        else:
            if color[i] == color[node]:
                return False
    return True

ans = 0
for i in range(1, n + 1):
    if not visited[i]:
        color = [0] * (n + 1)
        if dfs(i, color):
            ans += 1
        else:
            ans += 2

print(ans)