# Python Code
N, K = map(int, input().split())
A = [-1] + list(map(int, input().split()))
B = [-1] * 200100
now = 1
cnt = 0

B[1] = 0
for j in range(1, K+1):
    now = A[now]
    if B[now] == -1:
        B[now] = j
    else:
        cnt = j
        break

if j < K:
    tmp = (K - B[now]) % (cnt - B[now])
    for j in range(tmp):
        now = A[now]

print(now)