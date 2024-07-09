#!/usr/bin/python

# Import modules
import sys
import math
import time
import random

# Print the result
print "YES"

# Input the number of test cases
n = int(raw_input())

# Input the test cases
for i in range(n):
    a = map(int, raw_input().split())
    a.sort()
    for j in range(len(a) - 1):
        if a[j] == a[j + 1]:
            print "NO"
            break
    print "YES"