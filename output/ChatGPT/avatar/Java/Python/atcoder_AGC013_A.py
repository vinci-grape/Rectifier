# Python code:
import sys

N = int(input())
A = list(map(int, input().split()))

count = 0
i = 0
while i < N:
    if i == N - 1:
        count += 1
        break
    elif A[i] == A[i + 1]:
        pass
    elif A[i] < A[i + 1]:
        while A[i] <= A[i + 1]:
            i += 1
            if i == N - 1:
                break
        count += 1
    else:
        while A[i] >= A[i + 1]:
            i += 1
            if i == N - 1:
                break
        count += 1
    i += 1

print(count)