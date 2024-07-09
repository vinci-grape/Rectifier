import math
import sys

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
ans = 0
for i in range(1, n-1):
    if a[i] != min(a[i-1], min(a[i], a[i+1])) and a[i] != max(a[i-1], max(a[i], a[i+1])):
        ans += 1
print(ans)