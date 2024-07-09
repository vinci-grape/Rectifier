dp = []

def dfs(s):
    if dp[s] != -1:
        return dp[s]

    ret = 0
    for i in range(s - 3, -1, -1):
        ret += dfs(i)
        ret %= mod
    return ret

s = int(input())

dp = [-1] * (s + 1)
dp[0] = 1
print(dfs(s))