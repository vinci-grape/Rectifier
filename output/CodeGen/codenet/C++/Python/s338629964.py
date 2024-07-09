#!/usr/bin/python

import sys

def init():
    global fact
    global revfact
    global rev
    fact = [1]
    revfact = [1]
    rev = [0]
    for i in range(1, 1100000):
        fact.append(fact[i-1] * i % 1000000007)
        if i > 1:
            rev.append(1000000007 / i * (1000000007 - rev[i % 1000000007]) % 1000000007)
        revfact.append(revfact[i-1] * rev[i] % 1000000007)

def nCk(n, k):
    if n < k:
        return 0
    if comb[n][k]!= 0:
        return comb[n][k]
    return comb[n][k] = fact[n] * revfact[n-k] % 1000000007 * revfact[k] % 1000000007

def mod_pow(x, a, m = 1000000007):
    if a == 0:
        return 1
    if a % 2 == 0:
        return mod_pow(x, a / 2, m) * mod_pow(x, a / 2, m) % m
    return mod_pow(x, a / 2, m) * mod_pow(x, a / 2, m) * x % m

def inv(x, m = 1000000007):
    return mod_pow(x, m-2, m)

def aall, ball:
    global fact
    global revfact
    global rev
    aall = 0
    ball = 0
    for i in range(1, len(sys.argv)):
        aall += int(sys.argv[i])
        ball += int(sys.argv[i+1])
    return aall, ball

def dp(n, asum, cnt, p, p1):
    global fact
    global revfact
    global rev
    global comb
    if asum < 0 or cnt < 0 or p < 0 or p1 < 0:
        return 0
    if asum == 0 and cnt == 0 and p == 0 and p1 == 0:
        return 1
    if comb[n][cnt]!= 0:
        return comb[n][cnt]
    return comb[n][cnt] = dp(n-1, asum, cnt, p, p1) + dp(n-1, asum-a[n-1], cnt, p^1, p1) * nCk(cnt, b[n-1]-1) * rev[asum] * revfact[asum] * inv(a[n-1]) % 1000000007 * inv(a[n-1]) % 1000000007

def main():
    init()
    n, asum, cnt, p, p1 = map(int, sys.argv[1:])
    ans = dp(n, asum, cnt, p, p1)
    if ans < 0:
        ans += 1000000007
    print ans

if __name__ == '__main__':
    main()