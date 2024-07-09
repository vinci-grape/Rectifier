import sys

n = int(sys.stdin.readline())
v = []
c = []
dp = []

for i in range(n):
    v.append(int(sys.stdin.readline()))

for i in range(n):
    c.append(int(sys.stdin.readline()))

for i in range(n):
    dp.append(0)

dp[0] = 0

for i in range(1, n):
    tmp = dp[i - 1] + (v[i - 1] - c[i - 1])
    dp[i] = tmp if tmp > dp[i - 1] else dp[i - 1]

tmp = dp[n - 1] + (v[n - 1] - c[n - 1])
dp[n - 1] = tmp if tmp > dp[n - 1] else dp[n - 1]

print(dp[n - 1])