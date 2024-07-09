import sys

def init(a):
    n = len(a)
    for i in range(n):
        mn[0][i] = a[i]
    for i in range(1, LIM):
        for j in range(n):
            if j + (1 << (i - 1)) < n:
                mn[i][j] = max(mn[i - 1][j], mn[i - 1][j + (1 << (i - 1))])
    pw[1] = 0
    for i in range(2, N):
        pw[i] = pw[i // 2] + 1

def get(l, r):
    r += 1
    p = pw[r - l]
    return min(mn[p][l], mn[p][r - (1 << p)])


LIM = 20
N = 200000 + 7

mn = [[0] * N for _ in range(LIM)]
pw = [0] * N

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
dl = [0] * n
for i in range(n):
    dl[i] = i - a[i]
ans = 0
bans = []
for i in range(n):
    r = i
    while r + 1 < n and a[r] + 1 == a[r + 1]:
        r += 1
    ans += a[r]
    i = r
    bans.append(Ban(r - a[r], r, r - a[r]))
init(dl)
for t in bans:
    if get(t.l, t.r) > t.val:
        print(-1)
        exit()
print(ans)