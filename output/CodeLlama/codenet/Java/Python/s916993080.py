import sys
import math

n = int(sys.stdin.readline())
arr = []
dp = []
for i in range(n):
    arr.append(list(map(int, sys.stdin.readline().split())))
dp.append(arr[0])
for i in range(1, n):
    for j in range(3):
        if j == 0:
            dp[i][j] = max(arr[i][0] + dp[i-1][1], arr[i][0] + dp[i-1][2])
        if j == 1:
            dp[i][j] = max(arr[i][1] + dp[i-1][0], arr[i][1] + dp[i-1][2])
        if j == 2:
            dp[i][j] = max(arr[i][2] + dp[i-1][1], arr[i][2] + dp[i-1][0])
max = -1
for i in range(3):
    if dp[n-1][i] > max:
        max = dp[n-1][i]
print(max)