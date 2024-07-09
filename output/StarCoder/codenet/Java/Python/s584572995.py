import sys
from math import *
mod = 1000000007

def modpow(x, y):
    if y==0: return 1
    if y%2!=0: return x * modpow(x, y-1) % mod
    tmp = modpow(x, y/2)
    return tmp * tmp % mod

def main():
    N = int(sys.stdin.readline())
    to = [[] for i in range(N)]
    dp = [0 for i in range(N)]
    edges = []
    for i in range(N-1):
        A, B = map(int, sys.stdin.readline().split())
        to[A-1].append(B-1)
        to[B-1].append(A-1)
        edges.append([B-1, A-1])
    rec(0, -1)
    mulsum = 0
    for e in edges:
        candidate1 = e[0]
        candidate2 = e[1]
        child = candidate1
        if(dp[candidate1]>dp[candidate2]):child = candidate2
        a = dp[child]
        b = N - a
        mul = (modpow(2, a) - 1)*(modpow(2, b) - 1)%mod
        mulsum += mul
        mulsum %= mod
    cases = modpow(2, N)
    PN = (mulsum + (cases - 1 + mod)%mod)%mod
    BN = N * modpow(2, N-1) %mod
    WN = (PN - BN + mod)%mod
    ans = WN * modpow(cases, mod-2)
    ans %= mod
    print(ans)

def rec(v, parent):
    res = 1
    for next in to[v]:
        if(next == parent): continue
        res += rec(next, v)
    return dp[v] = res

main()