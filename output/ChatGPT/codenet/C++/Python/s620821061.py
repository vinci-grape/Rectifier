class BitMatching:
    def __init__(self, V):
        self.G = [[] for _ in range(2*V)]
        self.match = [-1] * (2*V)
        self.used = [False] * (2*V)

    def add(self, a, b):
        self.G[a].append(b+V)
        self.G[b+V].append(a)

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
        for v in range(V):
            if self.match[v] < 0:
                self.used = [False] * (2*V)
                if self.dfs(v):
                    res += 1
        return res


def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)


while True:
    n, m = map(int, input().split())
    if n == 0:
        break

    bm = BitMatching(n)
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    for i in range(n):
        for j in range(m):
            if gcd(a[i], b[j]) != 1:
                bm.add(i, j)

    print(bm.exec())