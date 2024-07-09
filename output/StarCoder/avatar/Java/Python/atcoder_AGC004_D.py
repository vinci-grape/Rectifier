import sys
input = sys.stdin.readline

n, k = map(int, input().split())

graph = [[] for _ in range(n)]

for i in range(n):
    a = int(input()) - 1
    if i!= 0:
        graph[a].append(i)
    elif a!= 0:
        answer += 1

def dfs(a, pre):
    h = 0
    for i in graph[a]:
        h = max(h, dfs(i, a))
    if pre!= 0 and h == k - 1:
        h = 0
        answer += 1
    else:
        h += 1
    return h

dfs(0, -1)
print(answer)