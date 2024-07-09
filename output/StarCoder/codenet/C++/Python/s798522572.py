N, T = map(int, input().split())
A = list(map(int, input().split()))
m = A[0]
B = [A[1] - m]
m = min(m, A[1])
for i in range(2, N):
    B.append(A[i] - m)
    m = min(m, A[i])
print(B.count(max(B)))