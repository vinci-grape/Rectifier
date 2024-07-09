import sys
from collections import defaultdict

def modpow(x, y):
    if y == 0:
        return 1
    if y % 2 != 0:
        return x * modpow(x, y - 1) % mod
    tmp = modpow(x, y // 2)
    return tmp * tmp % mod

def rec(v, parent):
    res = 1
    for next in to[v]:
        if next == parent:
            continue
        res += rec(next, v)
    return dp[v] = res

mod = 1000000007

N = int(sys.stdin.readline())
to = defaultdict(list)
for i in range(N - 1):
    A, B = map(int, sys.stdin.readline().split())
    to[A - 1].append(B - 1)
    to[B - 1].append(A - 1)
dp = [0] * N
rec(0, -1)
mulsum = 0
for e in edges:
    # 子の配下の頂点数を知りたいので、どちらが子頂点か調べる
    candidate1 = e[0]
    candidate2 = e[1]
    child = candidate1
    if dp[candidate1] > dp[candidate2]:
        child = candidate2

    a = dp[child]
    b = N - a

    # mulは、全ケース(2^n通り)における、この辺が部分木Sに含まれる回数
    # この辺を境にしてできる部分木2つについてそれぞれ、1つ以上黒を含む確率を求めて、掛け合わせた物に
    # 2^nをかけて場合の数にした
    mul = (modpow(2, a) - 1) * (modpow(2, b) - 1) % mod
    mulsum += mul
    mulsum %= mod

cases = modpow(2, N)
# PN:全ケースにおける、部分木Sに含まれる頂点数の総和
# 頂点の数は、辺の数＋１であり、辺の数が０の場合でも、黒頂点１個の空グラフがSに含まれるので問題ないが、
# 全部白頂点の場合だけはSに含まれない頂点を足してしまうことになるので、そのケースの１通りを引く
PN = (mulsum + (cases - 1 + mod) % mod) % mod

# Sに含まれる黒頂点は全頂点数の半分になる（黒頂点なら必ずSに含まれるため）
BN = N * modpow(2, N - 1) % mod
# Sに含まれる白頂点は、全頂点数ー黒頂点数
WN = (PN - BN + mod) % mod
ans = WN * modpow(cases, mod - 2)
ans %= mod

print(ans)