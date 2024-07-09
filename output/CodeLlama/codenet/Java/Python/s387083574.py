import sys

N = int(sys.stdin.readline())

map = {}

for i in range(1, N + 1):

    map[i] = int(sys.stdin.readline())

print(' '.join(map(str, sorted(map.keys(), key=lambda x: map[x]))))