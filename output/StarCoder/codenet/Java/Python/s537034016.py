import sys

mod = 1000000007

dp = [-1 for _ in range(100001)]

def dfs(s):
    if dp[s]!= -1:
        return dp[s]

    ret = 0
    for i in range(s - 3, -1, -1):
        ret += dfs(i)
        ret %= mod
    return dp[s] = ret

s = int(sys.stdin.readline())
print(dfs(s))