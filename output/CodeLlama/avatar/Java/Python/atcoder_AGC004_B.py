import sys

N = int(sys.stdin.readline().rstrip())
x = int(sys.stdin.readline().rstrip())

srimeList = []
for i in range(N):
    srimeList.append(int(sys.stdin.readline().rstrip()))

costList = []
for i in range(N):
    costList.append([0] * N)

for i in range(N):
    costList[i][0] = srimeList[i]
    for castNum in range(1, N):
        costList[i][castNum] = min(costList[i][castNum - 1], srimeList[(i - castNum + N) % N])

result = []
for i in range(N):
    result.append(i * x + sum(costList[i]))

print(min(result))