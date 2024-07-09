import sys
import math

n = int(sys.stdin.readline().rstrip())
array = list(map(int, sys.stdin.readline().rstrip().split()))
array.sort()
head = len(array) - 2
res = 0
for i in range(n):
    res += array[head]
    head -= 2
print(res)