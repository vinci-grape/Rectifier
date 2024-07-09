import math
import sys

n = int(sys.stdin.readline())
a = []
b = []
left = math.inf
right = 0
for i in range(n):
    a.append(int(sys.stdin.readline()))
    b.append(int(sys.stdin.readline()))
    left = min(left, a[i])
    right = max(right, b[i])
for i in range(n):
    if left == a[i] and right == b[i]:
        print(i + 1)
        exit()
print(-1)