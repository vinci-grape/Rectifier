#!/usr/bin/python

import sys

N = int(sys.argv[1])
X = [int(x) for x in sys.argv[2:]]
Y = [int(x) for x in sys.argv[2:]]

Y.sort()

y = Y[N/2]
for i in range(N):
    if X[i] < y:
        print Y[N/2]
    else:
        print Y[N/2 - 1]