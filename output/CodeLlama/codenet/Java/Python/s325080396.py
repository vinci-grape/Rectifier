import sys

n = int(sys.stdin.readline())
R = list(map(int, sys.stdin.readline().split()))
maxv = R[1] - R[0]
minv = R[0]
for i in range(1, n):
    maxv = max(maxv, R[i] - minv)
    minv = min(minv, R[i])
print(maxv)