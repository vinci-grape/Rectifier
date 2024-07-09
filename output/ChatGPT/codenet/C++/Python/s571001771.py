n, m = map(int, input().split())
key = [0] * 1005
cost = [0] * 1005
dp = [[0] * 1005 for _ in range((1 << 12) + 5)]
INF = 123456789012

for i in range(1, m + 1):
    cost[i], b = map(int, input().split())
    for j in range(b):
        c = int(input())
        key[i] += (1 << (c - 1))

for i in range(1 << n):
    for j in range(m):
        dp[i][j + 1] = min(dp[i][j], dp[i][j + 1])
        dp[i | key[j + 1]][j + 1] = min(dp[i | key[j + 1]][j + 1], dp[i][j] + cost[j + 1])

if dp[(1 << n) - 1][m] == INF:
    print(-1)
else:
    print(dp[(1 << n) - 1][m])