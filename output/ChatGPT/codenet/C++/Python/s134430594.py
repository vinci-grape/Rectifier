import sys

LIM = 20
N = 2 * 10**5 + 7

def init(a):
    n = len(a)
    mn = [[0] * N for _ in range(LIM)]
    for i in range(n):
        mn[0][i] = a[i]
    for i in range(LIM - 1):
        for j in range(n - (1 << (i + 1)) + 1):
            mn[i + 1][j] = max(mn[i][j], mn[i][j + (1 << i)])
    pw = [0] * N
    for i in range(2, N):
        pw[i] = pw[i // 2] + 1
    return mn, pw

def get(mn, pw, l, r):
    r += 1
    p = pw[r - l]
    return min(mn[p][l], mn[p][r - (1 << p)])

def main():
    n = int(input())
    a = list(map(int, input().split()))
    dl = [i - a[i] for i in range(n)]
    ans = 0
    bans = []
    for i in range(n):
        r = i
        while r + 1 < n and a[r] + 1 == a[r + 1]:
            r += 1
        ans += a[r]
        i = r
        bans.append((r - a[r], r, r - a[r]))
    mn, pw = init(dl)
    for t in bans:
        if get(mn, pw, t[0], t[1]) > t[2]:
            print(-1)
            return
    print(ans)

if __name__ == "__main__":
    main()