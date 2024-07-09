#!/usr/bin/env python
# -*- coding: utf-8 -*-

MOD = 998244353

def nCk(n, k):
    if n < k:
        return 0
    if n == k:
        return 1
    if k == 0:
        return 1
    if n == k + 1:
        return n
    return nCk(n - 1, k - 1) * n // k

def mod_pow(x, a, m = MOD):
    if a == 0:
        return 1
    res = mod_pow(x, a / 2, m)
    res = res * res % m
    if a % 2:
        res *= x
    return res % m

def inv(x, m = MOD):
    return mod_pow(x, m - 2, m)

def main():
    n = int(input())
    a = [0] * n
    b = [0] * n
    aall = 0
    ball = 0
    for i in range(n):
        a[i], b[i] = map(int, input().split())
        aall += a[i]
        ball += b[i]

    dp = [[[0] * 2 for _ in range(ball + 1)] for _ in range(aall + 1)]
    dp[0][0][0] = 1
    for i in range(1, n + 1):
        id = i % 2
        for asum in range(aall, -1, -1):
            for cnt in range(ball + 1):
                for p in range(2):
                    if asum - a[i - 1] < 0:
                        continue
                    pw = 1
                    for use in range(b[i - 1]):
                        if cnt - use >= 0:
                            tmp = nCk(cnt, use) % MOD * pw % MOD
                            dp[asum][cnt][p] += dp[asum - a[i - 1]][cnt - use][p ^ 1] * tmp % MOD
                        else:
                            break
                        pw = pw * a[i - 1] % MOD
                    if cnt - b[i - 1] + 1 >= 0:
                        dp[asum][cnt][p] += dp[asum - a[i - 1]][cnt - b[i - 1] + 1][p ^ 1] * nCk(cnt, b[i - 1] - 1) % MOD * pw % MOD
                    dp[asum][cnt][p] %= MOD

    ans = 0
    for asum in range(aall + 1):
        rev_asum_pow = 1
        for cnt in range(ball + 1):
            rev_asum_pow = rev_asum_pow * inv(asum) % MOD
            for p in range(2):
                x = dp[asum][cnt][p] * rev_asum_pow % MOD * (cnt + 1) % MOD * aall % MOD * inv(asum) % MOD
                if p == 1:
                    ans += x
                else:
                    ans -= x
                ans %= MOD
    print(ans)

if __name__ == '__main__':
    main()