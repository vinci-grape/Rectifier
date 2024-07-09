import sys
input = sys.stdin.readline

N, K = map(int, input().split())
A = [0] * (N + 1)
B = [-1] * (N + 1)

for i in range(N):
    A[i + 1] = int(input())

now = 1
cnt = 0

for j in range(1, K + 1):
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