def main():
    N = int(input())
    A = [int(x) for x in input().split()]
    for i in range(1, N + 1):
        A[i] = A[i] + A[i - 1]
    for i in range(0, N + 1):
        for j in range(0, 20):
            dp[i][0][j] = -(1 << 60)
            dp[i][1][j] = -(1 << 60)
    dp[0][0][10] = 0
    for i in range(1, N + 1):
        for j in range(6, 14 + 1):
            if dp[i - 1][0][j]!= (1 << 60):
                dp[i][1][j + 1] = max(dp[i][1][j + 1], dp[i - 1][0][j] + A[i])
                dp[i][0][j - 1] = max(dp[i][0][j - 1], dp[i - 1][0][j])
            if dp[i - 1][1][j]!= (1 << 60):
                dp[i][0][j - 1] = max(dp[i][0][j - 1], dp[i - 1][1][j])
    V = 10 + (N / 2) - (N - (N / 2))
    T1 = dp[N][0][V]
    T2 = dp[N][1][V]
    print(max(T1, T2))

if __name__ == '__main__':
    main()