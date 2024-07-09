#!/usr/bin/python
import sys

n = int(sys.argv[1])
a = [int(x) for x in sys.argv[2:]]

curr = 0
for i in range(n):
    if a[i] == curr + 1:
        curr += 1

if curr > 0:
    print n - curr
else:
    print -1