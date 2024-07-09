import sys

n = int(raw_input())

dp = [0] * 200001

for i in range(n):
    dp[int(raw_input())] = i

ans = 0

for i in range(2, n + 1):
    ans += abs(dp[i] - dp[i - 1])

print ans