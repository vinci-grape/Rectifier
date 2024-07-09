import math

n = int(input())
t = int(input())
A = list(map(int,input().split()))

minA = pow(10,9) + 1
num = 0

for i in range(n):
    if minA > A[i]:
        minA = A[i]
    else:
        if num == A[i] - minA:
            num += 1
        elif num < A[i] - minA:
            num = 1
            minA = A[i] - minA

print(num)