import sys

def solve(v1, v2, t, d):
    dp = [[-1e17 for _ in range(1150)] for _ in range(t-1)]
    dp[0][v1] = v1
    for i in range(1, t-1):
        for j in range(1150):
            for x in range(0, d+1):
                if j+x < 1150:
                    dp[i][j] = max(dp[i][j], dp[i-1][j+x]+j)
            for x in range(d, -1, -1):
                if j-x >= 0:
                    dp[i][j] = max(dp[i][j], dp[i-1][j-x]+j)
    ans = -1e17
    for i in range(t-2, t-1):
        for j in range(1150):
            if abs(j-v2) <= d:
                ans = max(ans, dp[i][j]+v2)
    return ans

if __name__ == '__main__':
    input = sys.stdin.read()
    data = list(map(int, input.split()))
    n = data[0]
    v1 = data[1]
    v2 = data[2]
    t = data[3]
    d = data[4]
    print(solve(v1, v2, t, d))