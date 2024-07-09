import math

minA = 10**9 + 1
num = 0

n, t = map(int, input().split())
A = list(map(int, input().split()))

for i in range(n):
    if minA > A[i]:
        minA = A[i]
    else:
        if f == A[i] - minA:
            num += 1
        elif f < A[i] - minA:
            num = 1
            f = A[i] - minA

print(num)