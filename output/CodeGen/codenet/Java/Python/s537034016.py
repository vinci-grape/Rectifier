def main():
    s = int(input())
    dp = [-1] * (s + 1)
    dp[0] = 1
    for i in range(s):
        for j in range(i + 1, s + 1):
            dp[j] = (dp[j] + dp[j - i]) % mod
    print(dp[s])


if __name__ == '__main__':
    main()