import sys
n = int(sys.stdin.readline())
map = {}
for i in range(n):
    val = int(sys.stdin.readline())
    map[val] = map.get(val, 0) + 1
max = -1
for key, value in map.items():
    max = max(max, value)
print(max, len(map))