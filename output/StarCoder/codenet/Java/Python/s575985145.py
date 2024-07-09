import sys

size = int(raw_input())
graph = [[0 for x in range(size)] for y in range(size)]

for i in range(size):
    id = int(raw_input())
    cols = int(raw_input())
    row = [0 for x in range(size)]
    for j in range(cols):
        row[int(raw_input()) - 1] = 1
    graph[id - 1] = row

for i in range(size):
    for j in range(size):
        print graph[i][j],
    print