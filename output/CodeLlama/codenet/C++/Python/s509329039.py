#!/usr/bin/env python3

import sys

def main():
    n, m = map(int, input().split())
    s = [int(x) - 1 for x in input().split()]
    c = [int(x) for x in input().split()]
    for i in range(1000):
        st = str(i)
        if len(st) != n:
            continue
        f = 1
        for j in range(m):
            if st[s[j]] == chr(c[j] + ord('0')):
                pass
            else:
                f = 0
        if f:
            print(i)
            return
    print(-1)

if __name__ == '__main__':
    main()