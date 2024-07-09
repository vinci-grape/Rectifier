import math
import sys

n = int(sys.stdin.readline())
for i in range(n):
    a = list(map(int, sys.stdin.readline().split()))
    a.sort()
    if a[2]**2 == a[0]**2 + a[1]**2:
        print("YES")
    else:
        print("NO")