import sys
import math

N, T = map(int, sys.stdin.readline().split())
AB = []
for i in range(N):
    AB.append(list(map(int, sys.stdin.readline().split())))
AB.sort(key=lambda x: x[0])
dp = [[0] * 6001 for _ in range(N + 1)]
for i in range(1, N + 1):
    for timeAfterEat in range(6001):
        dp[i][timeAfterEat] = max(dp[i][timeAfterEat], dp[i - 1][timeAfterEat])
        time = AB[i - 1][0]
        value = AB[i - 1][1]
        if 0 <= timeAfterEat - time and timeAfterEat - time < T:
            dp[i][timeAfterEat] = max(dp[i][timeAfterEat], dp[i - 1][timeAfterEat - time] + value)
print(max(dp[N]))