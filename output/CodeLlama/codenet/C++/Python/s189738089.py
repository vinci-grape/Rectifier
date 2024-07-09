import sys
input = sys.stdin.readline
INF = 1000000000

def main():
    N, K = map(int, input().split())
    h = list(map(int, input().split()))
    dp = [INF] * 100000
    dp[0] = 0
    for i in range(N):
        for j in range(1, K + 1):
            dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]))
    print(dp[N - 1])

if __name__ == '__main__':
    main()