#!/usr/bin/python
import sys
import math
import operator
import string
import re
import collections

n = int(sys.argv[1])
a = [int(i) for i in sys.argv[2:]]
b = [int(i) for i in sys.argv[3:]]

sum = 0
for i in range(n):
    if a[i] - b[i] > 0:
        sum += a[i] - b[i]

print sum