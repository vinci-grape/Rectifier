def chmin(a, b):
    if a > b:
        a = b
    return a


def main():
    N, K = map(int, raw_input().strip().split())
    h = map(int, raw_input().strip().split())
    dp = [INF] * (N + K + 1)
    dp[0] = 0
    # input
    rep(i, 0, N) dp[i + K + 1] = dp[i] + abs(h[i] - h[i + K])
    # dp
    rep(i, 0, N) {
        rep(j, 1, K + 1) {
            chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]))
        }
    }
    # output
    print dp[N - 1]

if __name__ == "__main__":
    main()