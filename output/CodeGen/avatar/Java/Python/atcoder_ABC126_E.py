class atcoder_ABC126_E {
    def doIt(self):
        n = int(input())
        uf = UnionFindTree(n)
        m = int(input())
        for i in range(m):
            x, y, z = map(int, input().split())
            uf.unite(x, y)
        cnt = 0
        for i in range(n):
            if uf.par[i] == i:
                cnt += 1
        print(cnt)

    class UnionFindTree:
        def __init__(self, n):
            self.n = n
            self.par = [i for i in range(n)]
            self.rank = [0 for i in range(n)]

        def find(self, x):
            if self.par[x] == x:
                return x
            else:
                return self.find(self.par[x])

        def unite(self, x, y):
            x, y = self.find(x), self.find(y)
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
}

if __name__ == '__main__':
    s = atcoder_ABC126_E()
    s.doIt()