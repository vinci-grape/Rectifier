import sys
input = sys.stdin.readline

class UnionFindTree:
    def __init__(self, n):
        self.par = list(range(n))
        self.rank = [0] * n

    def find(self, x):
        if self.par[x] == x:
            return x
        else:
            self.par[x] = self.find(self.par[x])
            return self.par[x]

    def unite(self, x, y):
        x = self.find(x)
        y = self.find(y)
        if x == y:
            return
        if self.rank[x] < self.rank[y]:
            self.par[x] = y
        else:
            self.par[y] = x
            if self.rank[x] == self.rank[y]:
                self.rank[x] += 1

    def same(self, x, y):
        return self.find(x) == self.find(y)

n = int(input())
uf = UnionFindTree(n)
m = int(input())
for _ in range(m):
    x, y, z = map(int, input().split())
    uf.unite(x-1, y-1)

cnt = 0
for i in range(n):
    if uf.par[i] == i:
        cnt += 1
print(cnt)