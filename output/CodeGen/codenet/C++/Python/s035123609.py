def main(argv):
    rr, cc, k = map(int, raw_input().split())
    for i in range(1, k + 1):
        r, c, v = map(int, raw_input().split())
        mat[r - 1][c - 1] = v
    dp = [[[0] * 4 for i in range(cc)] for j in range(rr)]
    dp[0][0][1] = mat[0][0]
    for y in range(rr):
        for x in range(cc):
            for c in range(4):
                v = mat[y][x]
                q = (x == 0) and dpl[x] or max(dpl[x], max(dp[y][x - 1][c], dp[y][x - 1][c - 1] + v))
                dp[y][x][c] = q
    print dp[rr - 1][cc - 1][3]

if __name__ == '__main__':
    main(sys.argv)