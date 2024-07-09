# -*- coding: utf-8 -*-

import sys


def ins(a, b, c):
    global l
    e[l + 1] = [b, u[a], c]
    u[a] = l + 1
    l += 1


def dfs(x, l):
    global vis, ok, cnt, d
    vis[x] = True
    cnt[l] += 1
    d[x] = l
    for i in range(u[x], 0, -1):
        T += 1
        if not vis[e[i][0]]:
            dfs(e[i][0], (l + e[i][2]) % 3)
        else:
            if (l + e[i][2]) % 3 != d[e[i][0]]:
                ok = False


n, m = map(int, sys.stdin.readline().split())
e = [[0] * 3 for i in range(n * 2 + 1)]
u = [0] * (n + 1)
l = 0
for i in range(m):
    a, b = map(int, sys.stdin.readline().split())
    ins(a, b, 1)
    ins(b, a, 2)

ans = 0
for i in range(1, n + 1):
    if not vis[i]:
        T = 0
        cnt = [0] * 3
        ok = True
        dfs(i, 0)
        s = cnt[0] + cnt[1] + cnt[2]
        if not ok:
            ans += s * s
        else:
            if cnt[0] and cnt[1] and cnt[2]:
                ans += cnt[0] * cnt[1] + cnt[1] * cnt[2] + cnt[2] * cnt[0]
            else:
                ans += T / 2

print(ans)