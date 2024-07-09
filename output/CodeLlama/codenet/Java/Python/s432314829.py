import sys

n, m = map(int, sys.stdin.readline().split())
dp = [0] * (n + 2)
dp[n + 1] = 0
dp[n] = 1
for i in range(m):
    dp[int(sys.stdin.readline())] = -1
for i in range(n - 1, -1, -1):
    if dp[i] == -1:
        dp[i] = 0
    else:
        dp[i] = (dp[i + 1] + dp[i + 2]) % 1000000007
print(dp[0])