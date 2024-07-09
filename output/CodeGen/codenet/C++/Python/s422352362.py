#!/usr/bin/python
import sys
import math
import operator

def main():
    n = int(sys.argv[1])
    a = [int(i) for i in sys.stdin.readline().split()]
    pre = [0] * (n + 1)
    last = [0] * (n + 1)
    sumpre = 0
    for i in range(1, n + 1):
        sumpre += a[i]
        pre[i] = sumpre
    for i in range(n, 0, -1):
        sumlast += a[i]
        last[i] = sumlast
    d = (1 << 60)
    for i in range(1, n):
        d = min(d, abs(pre[i] - last[i + 1]))
    print d

if __name__ == '__main__':
    main()