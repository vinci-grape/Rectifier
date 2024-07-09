MOD = 1000000007

s = input()
n = len(s)
dp = [[0, 0] for _ in range(n+1)]
dp[0][0] = 1

for i in range(n):
    if s[i] == '0':
        dp[i+1][0] = dp[i][0]
        dp[i+1][1] = dp[i][1]
    else:
        dp[i+1][1] = (dp[i][0] + dp[i][1]) % MOD

    if s[i] == '0':
        dp[i+1][1] += (dp[i][1] * 2) % MOD
        dp[i+1][1] %= MOD
    else:
        dp[i+1][0] += (dp[i][0] * 2) % MOD
        dp[i+1][1] += (dp[i][1] * 2) % MOD
        dp[i+1][0] %= MOD
        dp[i+1][1] %= MOD

print((dp[n][0] + dp[n][1]) % MOD)