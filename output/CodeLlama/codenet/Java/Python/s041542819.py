import sys
import math


def solve(a, b, q, s, t):
    s.insert(0, -10000000000)
    s.append(10000000000)
    t.insert(0, -10000000000)
    t.append(10000000000)
    for i in range(q):
        x = int(sys.stdin.readline())
        sl = x - s[bisect_left(s, x + 1) - 1]
        tl = x - t[bisect_left(t, x + 1) - 1]
        sr = s[bisect_left(s, x)] - x
        tr = t[bisect_left(t, x)] - x
        print(min(
            max(sl, tl),
            max(sr, tr),
            2 * sl + tr,
            2 * tl + sr,
            sl + 2 * tr,
            tl + 2 * sr
        ))


def bisect_left(a, x):
    lo = 0
    hi = len(a)
    while lo < hi:
        mid = (lo + hi) // 2
        if a[mid] < x:
            lo = mid + 1
        else:
            hi = mid
    return lo


if __name__ == '__main__':
    a, b, q = map(int, sys.stdin.readline().split())
    s = list(map(int, sys.stdin.readline().split()))
    t = list(map(int, sys.stdin.readline().split()))
    solve(a, b, q, s, t)