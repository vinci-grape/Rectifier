#!/usr/bin/python
import sys
import math
import time

def mergesort(a,left,right):
    if left >= right:
        return 0
    mid = (left+right)/2
    v1 = mergesort(a,left,mid)
    v2 = mergesort(a,mid,right)
    v3 = merge(a,left,mid,right)
    return v1+v2+v3

def merge(a,left,mid,right):
    n1 = mid - left
    n2 = right - mid
    L = [0]*(n1+1)
    R = [0]*(n2+1)
    i = j = 0
    for k in range(left,right+1):
        if i < n1 and j < n2 and L[i] <= R[j]:
            a[k] = L[i]
            i += 1
        else:
            a[k] = R[j]
            j += 1
    return len(L) + len(R)

def main():
    a = [0]*100000
    n = int(sys.argv[1])
    for i in range(n):
        a[i] = int(sys.argv[2])
    start = time.clock()
    ans = mergesort(a,0,n)
    end = time.clock()
    print ans
    print "Time taken: ", end - start, "seconds."

if __name__ == '__main__':
    main()