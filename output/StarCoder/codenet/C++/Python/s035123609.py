import sys

def main():
    rr, cc, k = map(int, sys.stdin.readline().strip().split())
    mat = [[0 for i in range(cc)] for j in range(rr)]
    dp = [[[0 for i in range(4)] for j in range(cc)] for k in range(rr)]
    dpl = [0 for i in range(cc)]
    for i in range(k):
        r, c, v = map(int, sys.stdin.readline().strip().split())
        mat[r - 1][c - 1] = v
    dp[0][0][1] = mat[0][0]
    for y in range(rr):
        for x in range(cc):
            for c in range(4):
                v = mat[y][x]
                q = 0
                if c == 0 or v == 0:
                    q = (x == 0)? dpl[x] : max(dpl[x], dp[y][x - 1][c])
                else:
                    q = (x == 0)? dpl[x] + v : max(dpl[x] + v, max(dp[y][x - 1][c], dp[y][x - 1][c - 1] + v))
                dp[y][x][c] = q
        for x in range(cc):
            dpl[x] = max(max(dp[y][x][0], dp[y][x][1]), max(dp[y][x][2], dp[y][x][3]))
    print(dpl[cc - 1])

if __name__ == "__main__":
    main()