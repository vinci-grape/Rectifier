import java.util.Arrays
import java.util.Comparator
import java.util.Scanner
import sys

N = int(input())
T = int(input())
AB = [[int(x) for x in input().split()] for i in range(N)]
AB = sorted(AB, key=lambda a: a[0])

dp = [[0] * 6001 for i in range(N + 1)]
for i in range(1, N + 1):
    for timeAfterEat in range(0, 6000 + 1):
        dp[i][timeAfterEat] = max(dp[i][timeAfterEat], dp[i - 1][timeAfterEat])
        time = AB[i - 1][0]
        value = AB[i - 1][1]
        if 0 <= timeAfterEat - time < T:
            dp[i][timeAfterEat] = max(dp[i][timeAfterEat], dp[i - 1][timeAfterEat - time] + value)

print(max(dp[N][6000], *dp[N][0:6000]))