import math
import sys


def main():
    input = sys.stdin.readline
    n = int(input())
    a = [int(input()) for _ in range(n)]
    l = 0
    r = 0
    flag = False
    isTrue = False
    for i in range(n):
        if a[i] != i + 1 and not flag:
            l = i + 1
            flag = True
            continue
        if a[i] != i + 1 and flag:
            r = i + 1
            if a[r - 1] - a[r - 2] > 0:
                isTrue = True
                break
    print(0, 0) if not isTrue else print(l, r)


if __name__ == "__main__":
    main()