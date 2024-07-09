import sys
from collections import defaultdict

class UnionFind:
    def __init__(self, n):
        self.n = n
        self.parents = [-1] * n

    def find(self, x):
        if self.parents[x] < 0:
            return x
        else:
            self.parents[x] = self.find(self.parents[x])
            return self.parents[x]

    def union(self, x, y):
        x = self.find(x)
        y = self.find(y)
        if x == y:
            return
        if self.parents[x] > self.parents[y]:
            x, y = y, x
        self.parents[x] += self.parents[y]
        self.parents[y] = x

    def size(self, x):
        return -self.parents[self.find(x)]

    def same(self, x, y):
        return self.find(x) == self.find(y)

    def members(self, x):
        root = self.find(x)
        return [i for i in range(self.n) if self.find(i) == root]

    def roots(self):
        return [i for i in range(self.n) if self.parents[i] < 0]

    def group_count(self):
        return len(self.roots())

    def all_group_members(self):
        group_members = defaultdict(list)
        for member in range(self.n):
            group_members[self.find(member)].append(member)
        return group_members.values()

def main():
    N = int(sys.stdin.readline())
    G = defaultdict(list)
    for _ in range(N-1):
        a, b, c = map(int, sys.stdin.readline().split())
        G[a].append((b, c))
        G[b].append((a, c))
    uf = UnionFind(N)
    for i in range(N):
        uf.union(i, i)
    for i in range(N):
        for j in G[i]:
            uf.union(i, j[0])
    Q, K = map(int, sys.stdin.readline().split())
    K -= 1
    for _ in range(Q):
        x, y = map(int, sys.stdin.readline().split())
        x -= 1
        y -= 1
        print(uf.size(x) + uf.size(y) - 2 * uf.size(uf.find(x)))

if __name__ == '__main__':
    main()