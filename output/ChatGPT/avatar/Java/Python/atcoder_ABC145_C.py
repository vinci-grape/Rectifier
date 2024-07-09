import math

N = int(input())
pos = []
for _ in range(N):
    x, y = map(int, input().split())
    pos.append([x, y])

sum = 0
for i in range(N):
    for j in range(N):
        if i == j:
            continue
        sum += math.sqrt((pos[i][0] - pos[j][0])**2 + (pos[i][1] - pos[j][1])**2)

print(sum / N)