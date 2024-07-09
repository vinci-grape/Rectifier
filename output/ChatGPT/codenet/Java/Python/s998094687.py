import math
import sys

n = int(input())
for _ in range(n):
    a = list(map(int, input().split()))
    a.sort()
    if math.pow(a[2], 2) == math.pow(a[0], 2) + math.pow(a[1], 2):
        print("YES")
    else:
        print("NO")