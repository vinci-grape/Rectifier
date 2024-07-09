import math
import sys

N, D = map(int, sys.stdin.readline().split())
vectors = []
for i in range(N):
    vectors.append(list(map(int, sys.stdin.readline().split())))
answer = 0
for i in range(N - 1):
    for j in range(i + 1, N):
        dist = 0
        for d in range(D):
            x = vectors[i][d] - vectors[j][d]
            dist += x * x
        sq = math.sqrt(dist)
        answer += 1 if math.fabs(sq - math.floor(sq)) < 0.001 else 0
print(answer)