import sys

def bfs(graph, start):
    visited = [False] * (len(graph))
    queue = [start]
    visited[start] = True

    while queue:
        s = queue.pop(0)
        print(s, end=' ')

        for i in range(len(graph)):
            if graph[s][i] == 1 and not visited[i]:
                queue.append(i)
                visited[i] = True

def main():
    n = int(input())
    graph = [[0 for x in range(n)] for y in range(n)]
    for i in range(n):
        u, k = map(int, input().split())
        for j in range(k):
            v = int(input())
            graph[u][v] = 1

    bfs(graph, 1)

if __name__ == '__main__':
    main()