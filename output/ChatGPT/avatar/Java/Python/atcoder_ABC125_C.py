def gcd(a, b):
    if b > a:
        a, b = b, a
    while b != 0:
        r = a % b
        a = b
        b = r
    return a

N = int(input())
A = list(map(int, input().split()))

M = [0] * N
L = [0] * N
R = [0] * N

L[0] = A[0]
for i in range(1, N):
    L[i] = gcd(L[i - 1], A[i])

R[N - 1] = A[N - 1]
for i in range(N - 2, -1, -1):
    R[i] = gcd(R[i + 1], A[i])

answer = max(L[N - 2], R[1])
for i in range(1, N - 1):
    answer = max(answer, gcd(L[i - 1], R[i + 1]))

print(answer)