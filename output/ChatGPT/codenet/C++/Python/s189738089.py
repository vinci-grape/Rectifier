dp = [float('inf')] * 101000
dp[0] = 0

N, K = map(int, input().split())
h = list(map(int, input().split()))

for i in range(N):
    for j in range(1, K + 1):
        dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]))

print(dp[N - 1])