import math
import sys

N = int(raw_input())
D = int(raw_input())
vectors = [[int(i) for i in raw_input().split()] for i in xrange(N)]

answer = 0
for i in xrange(N-1):
    for j in xrange(i+1,N):
        dist = 0
        for d in xrange(D):
            x = (vectors[i][d] - vectors[j][d])
            dist += (x * x)
        sq = math.sqrt(dist)
        answer += (abs(math.floor(sq) - sq) < 0.001 and 1 or 0)

print answer