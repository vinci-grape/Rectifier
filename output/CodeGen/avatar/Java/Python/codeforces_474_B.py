def fun(arr,q,n,m):
    res = 0
    i = 0
    j = n
    while i <= j:
        md = i + (j - i) / 2
        if arr[md] == q:
            return md
        elif arr[md] > q:
            res = md
            j = md - 1
        else:
            i = md + 1
    return res

#!/bin/python
import sys

n = int(raw_input())
arr = [int(i) for i in raw_input().split()]
m = int(raw_input())
q = [int(i) for i in raw_input().split()]

print fun(arr,q,n,m)