import sys

def main():
    S = input()
    dp = [1] * 13

    for i, d in enumerate(S[::-1]):
        nd = [0] * 13

        if d.isdigit():
            x = int(d) * d

            for j in range(13):
                nd[(j + x) % 13] = dp[j]
        else:
            for xi in range(10):
                x = xi * d

                for j in range(13):
                    ni = (j + x) % 13
                    nd[ni] = (nd[ni] + dp[j]) % 1000000007

        dp = nd

    print(dp[5])

if __name__ == '__main__':
    main()