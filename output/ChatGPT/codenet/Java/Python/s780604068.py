N = int(input())

map = []
for i in range(N * 2):
    map.append(int(input()))

map.sort()

max = 0
for i in range(0, N * 2, 2):
    max += min(map[i], map[i + 1])

print(max)