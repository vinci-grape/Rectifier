import sys

def main():
    # input
    N, K = map(int, sys.stdin.readline().split())
    h = list(map(int, sys.stdin.readline().split()))

    # dp
    dp = [float('inf') for _ in range(101000)]
    dp[0] = 0
    for i in range(N):
        for j in range(1, K + 1):
            dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]))

    # output
    print(dp[N - 1])

if __name__ == '__main__':
    main()