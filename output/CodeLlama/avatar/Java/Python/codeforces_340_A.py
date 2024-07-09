import math
import sys

x, y, a, b = map(int, sys.stdin.readline().split())

c = max(x, y)
j = 2
i = 0
x1 = 0
y1 = 0
ans = True

while c % min(x, y) != 0 and ans:
    if x > y:
        c = x * j
        j += 1
    else:
        c = y * j
        j += 1
    if c > b:
        print(0)
        ans = False
        break

if ans:
    count = 0
    i = a
    for i in range(a, b + 1):
        if i % c == 0:
            break
    if i != b + 1:
        print((b - i) // c + 1)
    else:
        print(0)