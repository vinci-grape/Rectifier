import sys
import string
import math

def dp(S, i, d, nd):
    if i == len(S):
        return nd[d]
    if not S[i].isdigit():
        for xi in range(0, 10):
            x = xi * d
            for j in range(0, 13):
                n = (j + x) % 13
                nd[n] = (nd[n] + dp(S, i + 1, d * 10 % 13, nd)) % 1000000007
    else:
        x = int(S[i]) * d
        for j in range(0, 13):
            n = (j + x) % 13
            nd[n] = (nd[n] + dp(S, i + 1, d, nd)) % 1000000007
    return nd[d]

def main():
    Si = sys.stdin.readline().strip()
    S = Si.replace(' ', '').replace('\n', '')
    S = list(S)
    n = len(S)
    nd = [0] * 13
    d = 1
    out = sys.stdout
    err = sys.stderr
    out.write(str(dp(S, 0, d, nd)) + '\n')

if __name__ == '__main__':
    main()