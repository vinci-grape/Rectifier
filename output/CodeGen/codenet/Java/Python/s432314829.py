def main():
    n = int(input())
    m = int(input())
    dp = [0] * (n + 2)
    dp[n + 1] = 1
    for i in range(m):
        dp[int(input())] = -1
    for i in range(n - 1, -1, -1):
        if dp[i] == -1:
            dp[i] = 0
        else:
            dp[i] = (dp[i + 1] + dp[i + 2]) % 1000000007
    print(dp[0])

main()