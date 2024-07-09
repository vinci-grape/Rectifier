import math
import sys

N, A, B = map(int, sys.stdin.readline().split())
k = 0
if 1 <= N <= math.pow(10, 18) and 0 <= A and 0 <= B and 0 < A + B and A + B <= math.pow(10, 18):
    if A + B <= N:
        k = N // (A + B)
        if N - k * (A + B) > A:
            print(A * k + (N - k * (A + B)) - (N - (k * (A + B) + A)))
        else:
            print(A * k + (N - k * (A + B)))
    else:
        print(A)
else:
    print(N)