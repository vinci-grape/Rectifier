#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import math
import string


def solve():
    maxsize = 0
    maxcnt = 0
    ans_num = 0
    ans_num2 = 0
    str_v = []

    while True:
        in = sys.stdin.readline().strip()
        if in == '':
            break
        str_v.append(in)
        if maxsize < len(in):
            maxsize = len(in)
            ans_num = len(str_v) - 1

    for i in range(len(str_v)):
        cnt = 0
        for j in range(len(str_v)):
            if str_v[i] == str_v[j]:
                cnt += 1
        if maxcnt < cnt:
            maxcnt = cnt
            ans_num2 = i

    print str_v[ans_num2], str_v[ans_num]


if __name__ == '__main__':
    solve()