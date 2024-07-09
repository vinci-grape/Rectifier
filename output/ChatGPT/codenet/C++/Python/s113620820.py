# Python code:

import sys

# constant
MAX_N = 4000
LINF = 1 << 60

# main
n = int(input())

wis = list(map(int, input().split()))
wsums = [0] * (n + 1)
dp = [[LINF] * (n + 1) for _ in range(n)]
ks = [[-1] * (n + 1) for _ in range(n)]

wsums[0] = 0
for i in range(n):
    wsums[i + 1] = wsums[i] + wis[i]

for i in range(n):
    dp[i][i + 1] = 0
    ks[i][i + 1] = i

for l in range(2, n + 1):
    for i in range(n - l + 1):
        j = i + l
        mind = LINF
        wsum = wsums[j] - wsums[i]
        mink = -1
        for k in range(ks[i][j - 1], ks[i + 1][j] + 1):
            d = dp[i][k] + dp[k][j] + wsum
            if mind > d:
                mind = d
                mink = k
        dp[i][j] = mind
        ks[i][j] = mink

print(dp[0][n])