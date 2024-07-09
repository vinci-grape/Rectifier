#!/usr/bin/python

import sys

def read_input():
    n = int(raw_input())
    t = int(raw_input())
    st = [0] * 7
    for i in range(n):
        t = int(raw_input())
        for j in range(7):
            st[j] ^= seg[t][j]
    return n, t, st

def print_output(n, t, st):
    ans = ''
    for i in range(7):
        ans += st[i]
    print ans

def main():
    n, t, st = read_input()
    print_output(n, t, st)

if __name__ == '__main__':
    main()