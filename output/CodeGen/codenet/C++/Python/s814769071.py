#!/usr/bin/python
# -*- coding: utf-8 -*-

# Python 2.7.3

import sys
import math

def main():
    n, k = map(int, raw_input().split())
    MOD = 10 ** 9 + 7
    mx = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2
    mn = k * (k - 1) / 2
    res = 0
    for i in xrange(k, n + 1):
        res += mx - mn + 1
        mx += n - i
        mn += i
        res %= MOD
    print res

if __name__ == '__main__':
    main()