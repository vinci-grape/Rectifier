import sys
import math

def merge(left, mid, right):
    n1 = mid - left
    n2 = right - mid
    L = [0] * n1
    R = [0] * n2
    for i in range(n1):
        L[i] = a[left + i]
    for i in range(n2):
        R[i] = a[mid + i]
    L[n1] = R[n2] = sys.maxint
    i = j = 0
    cnt = 0
    for k in range(left, right):
        if L[i] <= R[j]:
            a[k] = L[i]
            i += 1
        else:
            a[k] = R[j]
            j += 1
            cnt += n1 - i
    return cnt

def mergesort(left, right):
    if left + 1 < right:
        mid = (left + right) / 2
        v1 = mergesort(left, mid)
        v2 = mergesort(mid, right)
        v3 = merge(left, mid, right)
        return v1 + v2 + v3
    return 0

n = int(raw_input())
a = [0] * n
for i in range(n):
    a[i] = int(raw_input())
ans = mergesort(0, n)
print ans