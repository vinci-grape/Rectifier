def solve(A, B, C, D):
    MOD = 998244353
    dp = [[0] * (C + 1) for _ in range(D + 1)]
    for c in range(A, C + 1):
        for d in range(B, D + 1):
            if c == A and d == B:
                continue
            if c > A:
                dp[c - 1][d] = dp[c - 1][d] * d
            if d > B:
                dp[c][d - 1] = dp[c][d - 1] + dp[c][d - 1] * c
            if c > A and d > B:
                dp[c - 1][d - 1] = dp[c - 1][d - 1] - dp[c - 1][d - 1] * (c - 1) * (d - 1)
            dp[c][d] = (dp[c][d] + MOD) % MOD
    print(dp[C][D])

if __name__ == "__main__":
    A, B, C, D = map(int, input().split())
    solve(A, B, C, D)