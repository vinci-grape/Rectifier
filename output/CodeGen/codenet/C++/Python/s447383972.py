#!/usr/bin/python

import sys

n = int(raw_input())
a = [int(i) for i in raw_input().split()]
a.sort()
q = []
tot = 0
for i in range(1, n):
    if a[i] == a[i + 1]:
        q.append(a[i])
        i += 1
        tot += 1

print tot * tot - tot