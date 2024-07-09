#!/usr/bin/python
import sys

n = int(sys.argv[1])
a = int(sys.argv[2])

s = [int(i) for i in sys.stdin]

s.sort()

for i in range(n-a-1,n-1,-1):
    sum = 0
    for j in range(i,n-1):
        sum += s[j]
    print sum