import sys

def main():
    Si = sys.stdin.readline().strip()
    S = Si[::-1]

    dp = [1]

    for i, d in enumerate(range(1, len(S) + 1)):
        print('d:', d, 'i:', i, 'S[i]:', S[i])
        c = S[i]

        if c.isdigit():
            nd = [0] * 13
            x = int(c) * d

            for j in range(13):
                nd[(j + x) % 13] = dp[j]
        else:
            nd = [0] * 13
            for xi in range(10):
                x = xi * d

                for j in range(13):
                    ni = (j + x) % 13
                    nd[ni] = (nd[ni] + dp[j]) % 1000000007

        print(nd)
        dp = nd

    print(dp[5])


if __name__ == '__main__':
    main()