import sys

size = int(sys.stdin.readline())
graph = []

for i in range(size):
    id = int(sys.stdin.readline())
    cols = int(sys.stdin.readline())
    row = [0] * size
    for j in range(cols):
        row[int(sys.stdin.readline()) - 1] = 1
    graph.append(row)

for i in range(size):
    for j in range(size):
        print(graph[i][j], end=' ')
    print()