#!/usr/bin/python
import sys

def main():
    n,m = map(int,sys.stdin.readline().split())
    s = map(int,sys.stdin.readline().split())
    c = map(int,sys.stdin.readline().split())
    for i in range(m):
        s[i] -= 1
        c[i] -= '0'
    for i in range(1000):
        st = str(i)
        if len(st)!= n:
            continue
        f = 1
        for j in range(m):
            if st[s[j]]!= c[j] + '0':
                f = 0
        if f:
            print i
            break

if __name__ == '__main__':
    main()