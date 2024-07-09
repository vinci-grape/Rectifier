#!/usr/bin/env python
# -*- coding: utf-8 -*-

def main():
    while True:
        n = int(raw_input())
        if n == 0:
            break
        st = [0] * 7
        for i in range(n):
            t = int(raw_input())
            ans = [0] * 7
            for j in range(7):
                ans[j] = st[j] ^ seg[t][j]
                st[j] = seg[t][j]
            print ''.join(map(str, ans))

seg = [
    [0, 1, 1, 1, 1, 1, 1],
    [0, 0, 0, 0, 1, 1, 0],
    [1, 0, 1, 1, 0, 1, 1],
    [1, 0, 0, 1, 1, 1, 1],
    [1, 1, 0, 0, 1, 1, 0],
    [1, 1, 0, 1, 1, 0, 1],
    [1, 1, 1, 1, 1, 0, 1],
    [0, 1, 0, 0, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1],
    [1, 1, 0, 1, 1, 1, 1]
]

if __name__ == '__main__':
    main()