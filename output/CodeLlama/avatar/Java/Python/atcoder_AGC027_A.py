import sys
import math

N = int(sys.stdin.readline().rstrip())
x = int(sys.stdin.readline().rstrip())
sweet = []
for i in range(N):
    sweet.append(int(sys.stdin.readline().rstrip()))
sweet.sort()
num = 0
for i in range(N):
    if x - sweet[num] >= 0:
        x = x - sweet[num]
        num += 1
    else:
        break
if (num == N) and (x > 0):
    num -= 1
print(num)