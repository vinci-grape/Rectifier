import sys
sys.setrecursionlimit(10**6)

def dfs(x, l):
    global cnt, d, ok
    vis[x] = True
    cnt[l] += 1
    d[x] = l
    i = u[x]
    while i:
        if not vis[e[i].to]:
            dfs(e[i].to, (l + e[i].c) % 3)
        elif (l + e[i].c) % 3 != d[e[i].to]:
            ok = False
        i = e[i].pre

n, m = map(int, input().split())
u = [0] * (n + 1)
e = [0] * (m * 2 + 1)
l = 0
for i in range(1, m + 1):
    a, b = map(int, input().split())
    l += 1
    e[l] = [b, u[a], 1]
    u[a] = l
    l += 1
    e[l] = [a, u[b], 2]
    u[b] = l

cnt = [0] * 3
d = [0] * (n + 1)
ans = 0
for i in range(1, n + 1):
    vis = [False] * (n + 1)
    if not vis[i]:
        T = 0
        for j in range(3):
            cnt[j] = 0
        ok = True
        dfs(i, 0)
        s = cnt[0] + cnt[1] + cnt[2]
        if not ok:
            ans += s * s
        else:
            if cnt[0] and cnt[1] and cnt[2]:
                ans += cnt[0] * cnt[1] + cnt[1] * cnt[2] + cnt[2] * cnt[0]
            else:
                ans += T // 2
print(ans)