import sys

n, m = map(int, sys.stdin.readline().split())
A = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
b = list(map(int, sys.stdin.readline().split()))

for i in range(n):
    c = 0
    for j in range(m):
        c += A[i][j] * b[j]
    print(c)