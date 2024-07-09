class UnionFindTree:
    def __init__(self, n):
        self.n = n
        self.par = [i for i in range(n)]
        self.rank = [0 for _ in range(n)]

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


def doIt():
    n = int(input())
    utf = UnionFindTree(n)
    m = int(input())
    for i in range(m):
        x, y, z = map(int, input().split())
        utf.unite(x - 1, y - 1)
    cnt = 0
    for i in range(n):
        if utf.par[i] == i:
            cnt += 1
    print(cnt)


doIt()