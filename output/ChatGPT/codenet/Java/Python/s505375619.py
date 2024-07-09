n = int(input())
v = list(map(int, input().split()))
c = list(map(int, input().split()))
dp = [0] * n

for i in range(1, n):
    tmp = dp[i - 1] + (v[i - 1] - c[i - 1])
    dp[i] = max(tmp, dp[i - 1])

tmp = dp[n - 1] + (v[n - 1] - c[n - 1])
dp[n - 1] = max(tmp, dp[n - 1])

print(dp[n - 1])