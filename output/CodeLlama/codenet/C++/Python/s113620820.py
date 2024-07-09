#!/usr/bin/env python

# -*- coding: utf-8 -*-

# 2415.cc: Sashimi

import sys

def main():
    n = int(sys.stdin.readline())

    wis = [0] * (n + 1)
    wsums = [0] * (n + 2)
    dp = [[0] * (n + 2) for i in range(n + 1)]
    ks = [[0] * (n + 2) for i in range(n + 1)]

    wsums[0] = 0
    for i in range(n):
        wis[i] = int(sys.stdin.readline())
        wsums[i + 1] = wsums[i] + wis[i]

    for i in range(n):
        for j in range(n + 1):
            dp[i][j] = 1000000000000000000
            ks[i][j] = -1
        dp[i][i + 1] = 0
        ks[i][i + 1] = i

    for l in range(2, n + 1):
        for i in range(n + 1 - l):
            j = i + l
            wsum = wsums[j] - wsums[i]
            mind = 1000000000000000000
            mink = -1
            for k in range(ks[i][j - 1], ks[i + 1][j] + 1):
                d = dp[i][k] + dp[k][j] + wsum
                if mind > d:
                    mind = d
                    mink = k
            dp[i][j] = mind
            ks[i][j] = mink

    print(dp[0][n])

if __name__ == '__main__':
    main()