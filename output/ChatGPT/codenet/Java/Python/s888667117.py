import sys

def main():
    Si = input().strip()
    S = Si[::-1]

    dp = [0] * 13
    dp[0] = 1

    for i in range(len(S)):
        d = pow(10, i, 13)

        nd = [0] * 13

        c = S[i]

        if c.isdigit():
            x = (int(c) * d) % 13

            for j in range(13):
                nd[(j + x) % 13] = dp[j]
        else:
            for xi in range(10):
                x = (xi * d) % 13

                for j in range(13):
                    ni = (j + x) % 13
                    nd[ni] = (nd[ni] + dp[j]) % 1000000007

        dp = nd

    print(dp[5])

if __name__ == "__main__":
    main()