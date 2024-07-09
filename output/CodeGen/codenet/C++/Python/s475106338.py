#!/usr/bin/python

import sys

for i in range(4):
    t,n = map(int,raw_input().split())
    if t == 1:
        print 6000*n
    elif t == 2:
        print 4000*n
    elif t == 3:
        print 3000*n
    elif t == 4:
        print 2000*n