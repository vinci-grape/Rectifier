import sys

N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))

answer = 0
for i in range(N - 1):
    for j in range(i + 1, N):
        diff = abs(A[i] - A[j])
        answer = max(answer, diff)

print(answer)