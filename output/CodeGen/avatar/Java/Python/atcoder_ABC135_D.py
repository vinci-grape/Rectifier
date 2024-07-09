def main():
    sc = Scanner(sys.stdin)
    cs = sc.next().strip().lower()
    dp = [[0] * 13 for _ in range(len(cs))]
    base = 1
    for i in range(len(cs)):
        if cs[len(cs) - 1 - i] == '?':
            for pre in range(13):
                for next in range(10):
                    dp[i][(base * next + pre) % 13] += (i > 0 and dp[i - 1][pre] or (pre == 0 and 1 or 0))
                    dp[i][(base * next + pre) % 13] %= MOD
        else:
            int next = cs[len(cs) - 1 - i] - '0'
            for pre in range(13):
                dp[i][(base * next + pre) % 13] += (i > 0 and dp[i - 1][pre] or (pre == 0 and 1 or 0))
                dp[i][(base * next + pre) % 13] %= MOD
        base = base * 10 % 13
    print(dp[len(cs) - 1][5])

main()