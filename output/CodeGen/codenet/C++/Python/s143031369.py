#!/usr/bin/python

import math
import sys

def main():
    n = int(sys.argv[1])
    p = []
    for i in range(n):
        x, y = map(float, sys.stdin.readline().split())
        p.append(Point(x, y))
    if n == 2:
        print "0.5"
        print "0.5"
    else:
        m = jarvis(p, n, ch)
        for i in range(m):
            print ang[ch[i]] / 2. / math.pi
        for i in range(n):
            print p[i].x, p[i].y

if __name__ == '__main__':
    main()