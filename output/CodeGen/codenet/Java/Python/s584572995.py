import sys
import math

def modpow(x, y):
    if y == 0:
        return 1
    if y%2!= 0:
        return x * modpow(x, y-1) % mod
    else:
        return modpow(x, y/2) * modpow(x, y/2) % mod

def rec(v, parent):
    res = 1
    for next in to[v]:
        if next == parent:
            continue
        res += rec(next, v)
    dp[v] = res
    return res

def main():
    N = int(sys.stdin.readline())
    to = []
    for i in range(N):
        to.append([])
        for j in range(N):
            to[i].append(0)
    for i in range(N-1):
        a, b = map(int, sys.stdin.readline().split())
        to[a-1][b-1] = 1
        to[b-1][a-1] = 1
    dp = [0]*N
    rec(0, -1)
    mulsum = 0
    for e in edges:
        #子の配下の頂点数を知りたいので、どちらが子頂点か調べる
        candidate1 = e[0]
        candidate2 = e[1]
        child = candidate1
        if dp[candidate1]