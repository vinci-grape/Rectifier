import sys
MOD = 1000000007
dp = [[0 for i in range(13)] for j in range(10001)]
dp[0][0] = 1
for i in range(len(sys.stdin.readline().strip())):
    if sys.stdin.readline().strip()[i] == '?':
        for j in range(10):
            for k in range(13):
                dp[i + 1][(k * 10 + j) % 13] += dp[i][k]
                dp[i + 1][(k * 10 + j) % 13] %= MOD
    else:
        for k in range(13):
            x = int(sys.stdin.readline().strip()[i])
            dp[i + 1][(k * 10 + x) % 13] += dp[i][k]
            dp[i + 1][(k * 10 + x) % 13] %= MOD
print(dp[len(sys.stdin.readline().strip())][5])