#!/usr/bin/python
# -*- coding: utf-8 -*-

def main():
    while True:
        n = int(raw_input())
        if n == 0:
            break
        d = [[] for i in range(33)]
        v = []
        for i in range(n):
            v.append((0, raw_input()))
            m = int(raw_input())
            for j in range(m):
                a = int(raw_input())
                v[i][0] += n - len(d[a])
                for k in range(len(d[a])):
                    v[d[a][k]][0] -= 1
                d[a].append(i)
        v.sort()
        print v[0][0], v[0][1]

if __name__ == '__main__':
    main()