n = int(input())
map = {}
for i in range(n):
    val = int(input())
    map[val] = map.get(val, 0) + 1

max = float('-inf')
for value in map.values():
    max = max(max, value)

print(max, len(map))