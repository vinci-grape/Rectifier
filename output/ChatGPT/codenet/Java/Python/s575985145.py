import sys

size = int(input())
graph = [[0] * size for _ in range(size)]

for _ in range(size):
    id, cols = map(int, input().split())
    row = [0] * size
    for _ in range(cols):
        col = int(input())
        row[col - 1] = 1
    graph[id - 1] = row

for row in graph:
    print(' '.join(map(str, row)))