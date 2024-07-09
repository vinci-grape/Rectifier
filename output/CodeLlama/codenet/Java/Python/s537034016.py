import sys

def dfs(s):
    global dp
    if dp[s] != -1:
        return dp[s]
    ret = 0
    for i in range(s - 3, -1, -1):
        ret += dfs(i)
        ret %= 1000000007
    return dp[s] = ret

if __name__ == '__main__':
    dp = [-1] * 100001
    dp[0] = 1
    s = int(sys.stdin.readline())
    print(dfs(s))