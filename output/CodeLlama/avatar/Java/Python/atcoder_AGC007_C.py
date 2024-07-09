import math
import decimal
import sys

def main():
    N = float(sys.stdin.readline().rstrip())
    d = float(sys.stdin.readline().rstrip())
    x = float(sys.stdin.readline().rstrip())
    ans = decimal.Decimal("0.0")
    while N > 0.5:
        adnum = decimal.Decimal(str(d + x * (N - 0.5)))
        ans += adnum
        d = (N + 1.0) * d / N + (5.0 * x) / (2.0 * N)
        x = (1.0 + (2.0 / N)) * x
        N -= 1
    print(format(ans, '.20f'))


if __name__ == '__main__':
    main()