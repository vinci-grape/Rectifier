import sys

n, m = map(int, sys.stdin.readline().split())
a = list(map(int, sys.stdin.readline().split()))

dp = [0] * (n + 1)
dp[0] = 1
dp[1] = 1 if m > 0 and a[0] == 1 else 0

for i in range(2, n + 1):
    dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007
    if m > 0 and i == a[m - 1]:
        dp[i] = 0

print(dp[n])