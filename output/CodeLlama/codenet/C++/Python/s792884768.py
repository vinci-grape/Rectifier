#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import math

def count(left, right):
    return left.r * right.c * left.c

def solve(s, l, memo):
    assert s <= l
    if s == l:
        return 0
    if memo[s][l] != 0:
        return memo[s][l]
    if s + 1 == l:
        memo[s][l] = count(chain[s], chain[l])
    else:
        min = sys.maxint
        for i in range(s, l):
            c = solve(s, i, memo) + count(TSize(chain[s].r, chain[i].c), TSize(chain[i+1].r, chain[l].c)) + solve(i+1, l, memo)
            min = min(min, c)
        memo[s][l] = min
    # print "Solve! [%d], [%d]" % (s, l)
    return memo[s][l]

if __name__ == '__main__':
    n = int(raw_input())
    if n == 1:
        print 0
        sys.exit(0)
    chain = []
    for i in range(n):
        r, c = map(int, raw_input().split())
        chain.append(TSize(r, c))
    memo = [[0 for i in range(n)] for j in range(n)]
    print solve(0, n-1, memo)