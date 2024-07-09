import sys

n = int(sys.stdin.readline())
maxv = -sys.maxsize
minv = int(sys.stdin.readline())
for i in range(1, n):
    ri = int(sys.stdin.readline())
    maxv = max(maxv, ri - minv)
    minv = min(minv, ri)
print(maxv)