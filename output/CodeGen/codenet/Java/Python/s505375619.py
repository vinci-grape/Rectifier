def main():
    n = int(input())
    v = [int(i) for i in input().split()]
    c = [int(i) for i in input().split()]
    dp = [0] * n
    for i in range(n):
        dp[i] = dp[i - 1] + (v[i] - c[i])
    for i in range(n - 1, -1, -1):
        tmp = dp[i - 1] + (v[i] - c[i])
        dp[i] = tmp > dp[i] and tmp or dp[i]
    print(dp[n - 1])

if __name__ == '__main__':
    main()