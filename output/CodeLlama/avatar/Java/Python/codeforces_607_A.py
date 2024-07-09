import sys
n = int(sys.stdin.readline())
beacon = [0] * 1000001
dp = [0] * 1000001
max = 0
for i in range(n):
    a, b = map(int, sys.stdin.readline().split())
    beacon[a] = b
if beacon[0] != 0:
    dp[0] = 1
for i in range(1, 1000001):
    if beacon[i] != 0 and beacon[i] < i:
        dp[i] = dp[i - beacon[i] - 1] + 1
    elif beacon[i] != 0:
        dp[i] = 1
    else:
        dp[i] = dp[i - 1]
    max = max(max, dp[i])
print(n - max)