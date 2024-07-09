#!/usr/bin/python
import sys

def read_input():
    n = int(raw_input())
    ans = [0] * n
    for i in xrange(n-1):
        a = int(raw_input())
        a -= 1
        ans[a] += 1
    return ans

def main():
    n = int(raw_input())
    ans = read_input()
    for i in xrange(n):
        print ans[i]

if __name__ == '__main__':
    main()