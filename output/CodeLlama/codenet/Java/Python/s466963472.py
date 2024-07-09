#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys

def read():
    try:
        d = int(sys.stdin.readline())
        return True
    except:
        return False

def solve():
    ans = 0
    for i in range(1, 600 / d):
        x = i * d
        y = x * x
        ans += y * d
    return ans

while read():
    print solve()