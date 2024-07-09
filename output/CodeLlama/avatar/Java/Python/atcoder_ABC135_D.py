import sys

def main():
    sc = sys.stdin.readline
    cs = sc().rstrip()
    dp = [[0] * 13 for _ in range(len(cs))]
    base = 1
    for i in range(len(cs)):
        if cs[-1-i] == '?':
            for pre in range(13):
                for next in range(10):
                    dp[i][(base * next + pre) % 13] += (i > 0) * dp[i-1][pre] + (pre == 0) * (i == 0)
                    dp[i][(base * next + pre) % 13] %= 1000000007
        else:
            next = int(cs[-1-i])
            for pre in range(13):
                dp[i][(base * next + pre) % 13] += (i > 0) * dp[i-1][pre] + (pre == 0) * (i == 0)
                dp[i][(base * next + pre) % 13] %= 1000000007
        base = base * 10 % 13
    print(dp[-1][5])


if __name__ == '__main__':
    main()