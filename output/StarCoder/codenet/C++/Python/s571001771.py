import sys

n, m = map(int, raw_input().split())

key = [0] * (m + 1)
cost = [0] * (m + 1)
dp = [[0] * (m + 1) for _ in range(1 << n)]

for i in range(1, m + 1):
    cost[i], b = map(int, raw_input().split())
    for j in range(b):
        c = int(raw_input())
        key[i] += 1 << (c - 1)

for i in range(1 << n):
    for j in range(1, m + 1):
        dp[i][j] = dp[i][j - 1]
        if i & key[j]:
            dp[i][j] = min(dp[i][j], dp[i ^ key[j]][j - 1] + cost[j])

if dp[(1 << n) - 1][m] == 1000000000:
    print -1
else:
    print dp[(1 << n) - 1][m]