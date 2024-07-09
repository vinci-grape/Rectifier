#!/usr/bin/python

import sys

N = int(sys.argv[1])
max, min = sys.argv[2], sys.argv[3]

for i in range(1, N):
    in = int(sys.argv[i + 2])
    max = max if max > in else in
    min = min if min < in else in

print max - min