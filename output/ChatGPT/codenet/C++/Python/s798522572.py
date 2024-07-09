N, T = map(int, input().split())
A = list(map(int, input().split()))
B = [0] * N
m = A[0]
B[1] = A[1] - m
m = min(m, A[1])
for i in range(2, N):
    B[i] = A[i] - m
    m = min(m, A[i])