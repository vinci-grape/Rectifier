import sys
import math

def main():
    input = sys.stdin.readline
    MOD = 10 ** 9 + 7
    n = int(input())
    ai = list(map(int, input().split()))
    bi = list(map(int, input().split()))
    ai.sort()
    bi.sort()
    if n % 2 == 1:
        print(bi[n // 2] - ai[n // 2] + 1)
    else:
        b = (ai[n // 2] + ai[n // 2 - 1]) / 2
        c = (bi[n // 2] + bi[n // 2 - 1]) / 2
        print((c - b) * 2 + 1)


if __name__ == '__main__':
    main()