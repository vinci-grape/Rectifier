import sys

N = int(raw_input().strip())

map = [int(raw_input().strip()) for _ in range(N * 2)]

map.sort()

max = 0
for i in range(0, N * 2, 2):
    max += min(map[i], map[i + 1])

print max