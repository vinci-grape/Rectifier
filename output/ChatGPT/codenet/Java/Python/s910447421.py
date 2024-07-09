import sys
import math
from collections import defaultdict
from itertools import combinations


def solve():
    for add in range(1, N):
        taken = [False] * N
        p = balls[add][0] - balls[0][0]
        q = balls[add][1] - balls[0][1]
        ans[0] = min(ans[0], check(p, q))


def check(p, q):
    ret = 0
    while True:
        added = False
        start = 0
        x = -1
        y = -1
        for i in range(N):
            if not taken[i]:
                added = True
                ret += 1
                start = i
                taken[i] = True
                x = balls[i][0] + p
                y = balls[i][1] + q
                break
        if not added:
            break
        for i in range(start + 1, N):
            if balls[i][0] == x and balls[i][1] == y:
                taken[i] = True
                x += p
                y += q
    return ret


def main():
    global N, balls, ans, taken
    N = int(input())
    ans = [N]
    balls = []
    for _ in range(N):
        x, y = map(int, input().split())
        balls.append((x, y))
    balls.sort(key=lambda x: x[0])
    solve()
    balls.sort(key=lambda x: x[1])
    solve()
    print(ans[0])


if __name__ == '__main__':
    main()