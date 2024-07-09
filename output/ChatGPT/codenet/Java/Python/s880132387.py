import math

def run():
    while True:
        W, H = map(int, input().split())
        if W == 0 and H == 0:
            return
        map = [list(input()) for _ in range(H)]

        dp = [[0] * W for _ in range(H)]

        for h in range(H):
            for w in range(W):
                hprev = 0
                if h >= 1:
                    hprev = dp[h-1][w]
                wprev = 0
                if w >= 1:
                    wprev = dp[h][w-1]
                if map[h][w].isdigit():
                    maximum = max(hprev, wprev)
                    dp[h][w] = maximum * 10 + int(map[h][w])
                else:
                    dp[h][w] = 0

        maximum = 0
        for h in range(H):
            for w in range(W):
                maximum = max(maximum, dp[h][w])
        print(maximum)

run()