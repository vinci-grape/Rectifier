import sys

def main():
    MOD = 1000000007
    S = sys.stdin.readline().strip()
    dp = [[0 for _ in range(13)] for _ in range(len(S) + 1)]
    dp[0][0] = 1
    for i in range(len(S)):
        if S[i] == '?':
            for j in range(10):
                for k in range(13):
                    dp[i + 1][(k * 10 + j) % 13] += dp[i][k]
                    dp[i + 1][(k * 10 + j) % 13] %= MOD
        else:
            for k in range(13):
                x = int(S[i])
                dp[i + 1][(k * 10 + x) % 13] += dp[i][k]
                dp[i + 1][(k * 10 + x) % 13] %= MOD
    print(dp[len(S)][5])

if __name__ == '__main__':
    main()