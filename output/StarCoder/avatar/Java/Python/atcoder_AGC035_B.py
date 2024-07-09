import sys
input = sys.stdin.readline

n = int(input())
m = int(input())

graph = [[] for _ in range(n)]

for _ in range(m):
    a, b = map(int, input().split())
    graph[a-1].append(b-1)
    graph[b-1].append(a-1)

visited = [0] * n
odd = [False] * n

def dfs(crt, parent):
    visited[crt] = 1
    crt_connect = graph[crt]
    for child in crt_connect:
        if child == parent or visited[child] == 1:
            continue
        elif visited[child] == 2:
            print((crt+1), (child+1))
            odd[crt] = not odd[crt]
        else:
            dfs(child, crt)
            if odd[child]:
                print((child+1), (crt+1))
                odd[child] = not odd[child]
            else:
                print((crt+1), (child+1))
                odd[crt] = not odd[crt]
    visited[crt] = 2

dfs(0, -1)