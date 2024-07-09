import sys
input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))
A.sort(reverse=True)
index = 0
max = -1
for i in range(1, N):
    if max < abs(A[0] - 2 * A[i]):
        max = abs(A[0] - 2 * A[i])
        index = i
print(A[0], A[index])