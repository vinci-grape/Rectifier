N = int(input())
map = {}
for i in range(1, N + 1):
  map[i] = int(input())
sorted_keys = sorted(map, key=map.get)
sorted_values = [str(map[key]) for key in sorted_keys]
print(" ".join(sorted_values))