#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys

class TSize:
    def __init__(self, r, c):
        self.r = r
        self.c = c

class TMcmSolver:
    def __init__(self, chain):
        self.FChain = chain
        self.FMemo = [[0 for i in range(len(chain))] for j in range(len(chain))]

    def Solve(self, s, l):
        assert(s <= l)
        if s == l:
            return 0
        if self.FMemo[s][l]!= 0:
            return self.FMemo[s][l]
        if s + 1 == l:
            self.FMemo[s][l] = self.FChain[s].r * self.FChain[l].c * self.FChain[l].c
        else:
            min = sys.maxint
            for i in range(s, l):
                c = self.Solve(s, i) + self.FChain[i+1].r * self.FChain[l].c * self.FChain[l].c + self.Solve(i+1, l)
                min = min if c < min else c
            self.FMemo[s][l] = min
        return self.FMemo[s][l]

    def Answer(self):
        return self.Solve(0, len(self.FChain) - 1)

if __name__ == '__main__':
    n = int(sys.stdin.readline())
    chain = []
    for i in range(n):
        r, c = map(int, sys.stdin.readline().split())
        chain.append(TSize(r, c))
    solver = TMcmSolver(chain)
    print solver.Answer()