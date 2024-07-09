import sys

n, m = map(int, sys.stdin.readline().split())

graph = [[] for _ in range(n)]

for _ in range(m):

    a, b = map(int, sys.stdin.readline().split())

    graph[a - 1].append(b - 1)

    graph[b - 1].append(a - 1)

if m % 2 != 0:

    print(-1)

    exit()

visited = [0] * n

odd = [False] * n

result = []

def dfs(cur, parent):

    visited[cur] = 1

    for child in graph[cur]:

        if child == parent or visited[child] == 1:

            continue

        else:

            dfs(child, cur)

            if odd[child]:

                result.append([child + 1, cur + 1])

                odd[child] = not odd[child]

            else:

                result.append([cur + 1, child + 1])

                odd[cur] = not odd[cur]

    visited[cur] = 2

dfs(0, -1)

for i in range(len(result)):

    print(result[i][0], result[i][1])