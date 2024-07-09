#!/usr/bin/python

import sys

n = int(raw_input())
a = [int(i) for i in raw_input().split()]

print a[n-1]
for i in xrange(1,n):
    print a[n-i-1]