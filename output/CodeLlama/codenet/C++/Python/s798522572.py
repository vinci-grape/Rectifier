#!/bin/python3

import sys


n, t = input().strip().split(' ')
n, t = [int(n), int(t)]
a = list(map(int, input().strip().split(' ')))
b = [0] * n
m = a[0]
b[1] = a[1] - m
m = min(m, a[1])
for i in range(2, n):
    b[i] = a[i] - m
    m = min(m, a[i])
print(b.count(max(b)))