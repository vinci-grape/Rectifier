import sys

n = int(sys.stdin.readline())
dp = [0] * 200001
inputs = list(sys.stdin.readline().split())
for i in range(n):
    dp[int(inputs[i])] = i
ans = 0
for i in range(2, n + 1):
    ans += abs(dp[i] - dp[i - 1])
print(ans)