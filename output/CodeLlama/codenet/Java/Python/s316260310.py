import sys
import math
import io
import os
import time
import random

# sys.stdin = io.TextIOWrapper(sys.stdin.buffer, encoding='utf-8')
# sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

MOD = 1000000007
MAXN = 1000006


def ncr(n, r):
    if r > n:
        return 0
    numerator = factorial[n]
    denominator = factorial[r] * factorial[n - r] % MOD
    return numerator * pow(denominator, MOD - 2, MOD) % MOD


def get_int_array(size):
    return [int(x) for x in sys.stdin.readline().split()]


def get_long_array(size):
    return [int(x) for x in sys.stdin.readline().split()]


def get_string_array(size):
    return sys.stdin.readline().split()


def join_elements(ar):
    return ' '.join(map(str, ar))


def gcd(a, b):
    return b if a == 0 else gcd(b % a, a)


def max(ar):
    return max(ar)


def min(ar):
    return min(ar)


def sum(ar):
    return sum(ar)


def shuffle(ar):
    random.shuffle(ar)


def reverse(ar):
    ar.reverse()


def pow(base, exp, mod):
    base %= mod
    ret = 1
    while exp > 0:
        if (exp & 1) == 1:
            ret = ret * base % mod
        base = base * base % mod
        exp >>= 1
    return ret


def main():
    global factorial
    factorial = [1] * (MAXN + 1)
    for i in range(1, MAXN + 1):
        factorial[i] = factorial[i - 1] * i % MOD

    tc = int(sys.stdin.readline())
    for tci in range(1, tc + 1):
        N, K = map(int, sys.stdin.readline().split())
        A = get_int_array(N)

        straight = []
        vis = [False] * (N + 1)
        curr = 0
        while not vis[curr]:
            vis[curr] = True
            curr = A[curr] - 1

        st = 0
        while st != curr:
            straight.append(st)
            st = A[st] - 1

        cycle = [curr]
        curr = A[curr] - 1
        while curr != cycle[0]:
            cycle.append(curr)
            curr = A[curr] - 1

        # print(straight)
        # print(cycle)

        if K < len(straight):
            print(straight[K] + 1)
        else:
            K -= len(straight)
            print(cycle[K % len(cycle)] + 1)


if __name__ == '__main__':
    main()