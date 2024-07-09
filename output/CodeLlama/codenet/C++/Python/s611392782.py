# -*- coding: utf-8 -*-

import sys

def mul(str, idx):
    res = int(str[idx])
    while idx+1 < len(str) and str[idx+1] == '*':
        idx += 2
        res *= int(str[idx])
    return res

def add(str, idx):
    res = mul(str, idx)
    while idx+1 < len(str) and str[idx+1] == '+':
        idx += 2
        res += mul(str, idx)
    return res

def bob(str, idx):
    res = int(str[idx])
    while idx+1 < len(str):
        if str[idx+1] == '+':
            res += int(str[idx+2])
        else:
            res *= int(str[idx+2])
        idx += 2
    return res

while True:
    s, d = sys.stdin.readline().split()
    if s == '0' and d == '0':
        break
    idx = 0
    a = add(s, idx)
    idx = 0
    b = bob(s, idx)
    if a == int(d):
        print 'U' if b == int(d) else 'M'
    else:
        print 'L' if b == int(d) else 'I'