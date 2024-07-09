#!/usr/bin/env python

import sys

def main():
    sys.stdin.readline()
    for line in sys.stdin:
        money = int(line)
        m = [10, 50, 100, 500]
        first = True
        sum = 0
        num = [0, 0, 0, 0]
        for i in range(4):
            num[i] = int(sys.stdin.readline())
            sum += num[i] * m[i]
        change = sum - money
        for i in range(3, -1, -1):
            if change / m[i]:
                num[i] = num[i] - change / m[i]
                change %= m[i]
        for i in range(4):
            if num[i] > 0:
                if not first:
                    print()
                first = False
                print(m[i], num[i])

if __name__ == '__main__':
    main()