import sys
import random

def main():
    while True:
        W, H = map(int, sys.stdin.readline().split())
        if W == 0 and H == 0:
            break
        map = []
        for i in range(H):
            map.append(sys.stdin.readline().strip())
        dp = [[0 for j in range(W)] for i in range(H)]
        for h in range(H):
            for w in range(W):
                hprev = 0
                if h >= 1:
                    hprev = dp[h - 1][w]
                wprev = 0
                if w >= 1:
                    wprev = dp[h][w - 1]
                if map[h][w].isdigit():
                    max = 0
                    if hprev > wprev:
                        max = hprev
                    else:
                        max = wprev
                    dp[h][w] = max * 10 + int(map[h][w])
                else:
                    dp[h][w] = 0
        max = 0
        for h in range(H):
            for w in range(W):
                if dp[h][w] > max:
                    max = dp[h][w]
        print(max)

if __name__ == "__main__":
    main()