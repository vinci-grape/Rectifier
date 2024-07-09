# -*- coding: utf-8 -*-

import sys


class BitMatching:
    def __init__(self, V):
        self.G = [[] for _ in range(2 * V)]
        self.match = [-1 for _ in range(2 * V)]
        self.used = [False for _ in range(2 * V)]

    def init(self):
        for i in range(2 * self.V):
            self.G[i] = []

    def add(self, a, b):
        self.G[a].append(b + self.V)
        self.G[b + self.V].append(a)

    def dfs(self, v):
        self.used[v] = True
        for u in self.G[v]:
            w = self.match[u]
            if w < 0 or (not self.used[w] and self.dfs(w)):
                self.match[v] = u
                self.match[u] = v
                return True
        return False

    def exec(self):
        res = 0
        for v in range(self.V):
            if self.match[v] < 0:
                self.used = [False for _ in range(2 * self.V)]
                if self.dfs(v):
                    res += 1
        return res


if __name__ == '__main__':
    while True:
        N, M = map(int, sys.stdin.readline().split())
        if not N:
            break
        bm = BitMatching(N)
        a = [int(sys.stdin.readline()) for _ in range(N)]
        b = [int(sys.stdin.readline()) for _ in range(M)]

        for i in range(N):
            for j in range(M):
                if gcd(a[i], b[j]) != 1:
                    bm.add(i, j)

        print(bm.exec())