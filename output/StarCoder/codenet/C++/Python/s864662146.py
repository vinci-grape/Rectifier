N = int(input())
A = [int(input()) for i in range(N)]

m = min(A)
M = max(A)

print(M - m)