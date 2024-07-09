import sys
import math
from functools import reduce

MOD = 10 ** 9 + 7


def comb(n, k):
    if n < k:
        return 0
    if n < 0 or k < 0:
        return 0
    return reduce(lambda x, y: (x * y) % MOD, range(n - k + 1, n + 1))


def main():
    input = sys.stdin.readline
    X, Y = map(int, input().split())
    if (X + Y) % 3 != 0:
        print(0)
        return
    n = (X + Y) // 3 + 1
    k = 2 * (n - 1) - Y + 1
    print(comb(n - 1, k - 1))


if __name__ == "__main__":
    main()