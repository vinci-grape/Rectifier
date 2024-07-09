import sys

def possible(N, A):
    sum = 0
    for i in range(N):
        sum += A[i]
    NS = (N * (N + 1)) / 2
    if sum % NS!= 0:
        return False
    K = sum / NS
    for i in range(N):
        j = i == 0? N - 1 : i - 1
        d = K - (A[i] - A[j])
        if d < 0 or d % N!= 0:
            return False
    return True

N = int(input())
A = [int(x) for x in input().split()]
if possible(N, A):
    print("YES")
else:
    print("NO")