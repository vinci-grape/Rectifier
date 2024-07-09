#!/usr/bin/python

import math
import sys
import operator
import collections

def main():
    n,m = map(int,raw_input().split())
    ans = 0
    #n gu m ki
    ans += n*(n-1)/2
    # gu gu
    ans += m*(m-1)/2
    print ans

if __name__ == '__main__':
    main()