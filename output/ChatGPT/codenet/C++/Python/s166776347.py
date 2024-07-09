import math

# 入力
N, K = map(int, input().split())
A = list(map(int, input().split()))

# 解法
ans1 = 0
for i in range(N):
    for j in range(N):
        if i >= j:
            continue
        if A[i] > A[j]:
            ans1 += 1
            ans1 %= (10**9 + 7)

count = [0] * 2005
for i in range(N):
    count[A[i] - 1] += 1

ans2 = 0
remain = N
for i in range(2005):
    remain -= count[i]
    ans2 += count[i] * remain

ans = 0
tmp = K * (K - 1) // 2
tmp %= (10**9 + 7)
tmp *= ans2
tmp %= (10**9 + 7)
ans += ans1 * K
ans %= (10**9 + 7)
ans += tmp
ans %= (10**9 + 7)

# 出力
print(ans)