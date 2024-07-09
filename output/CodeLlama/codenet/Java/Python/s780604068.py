import sys

N = int(sys.stdin.readline())

map = list(map(int, sys.stdin.readline().split()))

map.sort()

max = 0

for i in range(0, N * 2, 2):
    max += min(map[i], map[i + 1])

print(max)