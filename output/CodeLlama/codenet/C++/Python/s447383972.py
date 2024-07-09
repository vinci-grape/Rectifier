# -*- coding:utf-8 -*-

import sys

n = int(sys.stdin.readline())
a = [int(sys.stdin.readline()) for i in range(n)]
a.sort()

tot = 0
for i in range(1, n):
    if a[i] == a[i + 1]:
        tot += 1
        i += 1

print(a[tot] * a[tot - 1])