#!/usr/bin/python

import sys

def solve():
    maxsize = 0
    maxcnt = 0
    ans_num = 0
    ans_num2 = 0
    str_v = []
    
    for line in sys.stdin:
        str_v.append(line.strip())
        if maxsize < len(str_v[-1]):
            maxsize = len(str_v[-1])
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
    
solve()