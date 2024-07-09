#!/usr/bin/env python
# -*- coding: utf-8 -*-
import sys
import math
from collections import deque

def cross(o, a, b):
    return (a.x - o.x) * (b.y - o.y) - (b.x - o.x) * (a.y - o.y)

def dot(o, a, b):
    return (a.x - o.x) * (b.x - o.x) + (a.y - o.y) * (b.y - o.y)

def dis(a, b):
    return math.sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y))

def cos(o, a, b):
    return dot(o, a, b) / dis(o, a) / dis(o, b)

def jarvis(p, n, ch):
    d, i, o, s, l, t = 0, 0, 0, 0, 0, 0
    for i in range(n):
        if p[i] < p[d]:
            d = i
    l = s = ch[0] = d
    d = 1
    while 1:
        o = l
        for i in range(n):
            if (t := cross(p[o], p[l], p[i])) > 0 or (t == 0 and btw(p[l], p[o], p[i]) <= 0):
                l = i
        ch[d] = l
        if l == s:
            break
        d += 1
    return d

def btw(x, a, b):
    return sig(cross(x, a, b))

def sig(d):
    return abs(d) < 1e-8 and 0 or d < 0 and -1 or 1

def main():
    n = int(sys.stdin.readline())
    p = [Point(0, 0) for _ in range(n)]
    for i in range(n):
        x, y = map(float, sys.stdin.readline().split())
        p[i].x, p[i].y = x, y
    if n == 2:
        print('0.5')
        print('0.5')
    else:
        ch = [0] * (n + 1)
        m = jarvis(p, n, ch)
        sum = 0
        if m == 2:
            ans = [0.5] * n
        else:
            ang = [0] * n
            for i in range(m):
                ang[ch[i]] = math.pi - math.acos(cos(p[ch[i]], p[ch[(i - 1 + m) % m]], p[ch[(i + 1) % m]]))
            for i in range(n):
                ans[i] = ang[i] / 2 / math.pi
        for i in range(n):
            print('%.20f' % ans[i])

if __name__ == '__main__':
    main()