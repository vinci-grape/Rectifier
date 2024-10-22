def main(args):
    mod = 1e9 + 7
    sc = Scanner(sys.stdin)
    n = sc.nextInt()
    k = sc.nextInt()
    sc.close()
    len = [1]
    while len[-1] <= n:
        len.append(len[-1] + len[-2])
    q = len[-1]
    dp = [0] * (k * (q + 1))
    for j in range(1, q + 1):
        dp[j] = len[j - 1] + dp[j - 1]
    for i in range(1, k):
        for j in range(1, q + 1):
            dp[i * (q + 1) + j] = dp[i * (q + 1) + j - 1] + dp[(i - 1) * (q + 1) + q - j + 1] * len[j - 1]
            dp[i * (q + 1) + j] %= mod
    print(dp[k * (q + 1) - 1])