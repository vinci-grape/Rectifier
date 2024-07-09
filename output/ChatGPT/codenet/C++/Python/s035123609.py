import sys

rr, cc, k = map(int, sys.stdin.readline().split())

mat = [[0] * cc for _ in range(rr)]
dp = [[[0] * 4 for _ in range(cc)] for _ in range(rr)]
dpl = [0] * cc

for _ in range(k):
    r, c, v = map(int, sys.stdin.readline().split())
    mat[r - 1][c - 1] = v

dp[0][0][1] = mat[0][0]

for y in range(rr):
    for x in range(cc):
        for c in range(4):
            v = mat[y][x]
            if c == 0 or v == 0:
                q = dpl[x] if x == 0 else max(dpl[x], dp[y][x - 1][c])
            else:
                q = dpl[x] + v if x == 0 else max(dpl[x] + v, max(dp[y][x - 1][c], dp[y][x - 1][c - 1] + v))
            dp[y][x][c] = q

    for x in range(cc):
        dpl[x] = max(dp[y][x][0], dp[y][x][1], dp[y][x][2], dp[y][x][3])

print(dpl[cc - 1])