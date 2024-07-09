import sys
import math

while True:
    line = sys.stdin.readline()
    if not line:
        break
    l = [int(x) for x in line.split(',')]
    v = [int(x) for x in line.split(',')]
    t = sum(l)/(v[0]+v[1])
    d = 0
    for i in range(11):
        if d + l[i] >= v[0]*t:
            print(i)
            break
        else:
            d += l[i]