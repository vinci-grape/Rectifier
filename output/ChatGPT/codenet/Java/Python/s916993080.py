arr = []
n = int(input())
for _ in range(n):
    arr.append(list(map(int, input().split())))

dp = [[0] * 3 for _ in range(n)]
dp[0] = arr[0]

for i in range(1, n):
    dp[i][0] = max(arr[i][0] + dp[i-1][1], arr[i][0] + dp[i-1][2])
    dp[i][1] = max(arr[i][1] + dp[i-1][0], arr[i][1] + dp[i-1][2])
    dp[i][2] = max(arr[i][2] + dp[i-1][1], arr[i][2] + dp[i-1][0])

max_val = max(dp[n-1])
print(max_val)