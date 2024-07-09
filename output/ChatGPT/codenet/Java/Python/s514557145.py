def modInv(x):
    return modPow(x, MOD2 - 2)

def modPow(x, y):
    z = 1
    while y > 0:
        if y % 2 == 0:
            x = (x * x) % MOD2
            y //= 2
        else:
            z = (z * x) % MOD2
            y -= 1
    return z

class S:
    E = S(0, Integer.MAX_VALUE//2, Integer.MIN_VALUE//2)

    def __init__(self, sum, l, r):
        self.sum = sum
        self.l = l
        self.r = r

    @staticmethod
    def op(s1, s2):
        sum = s1.sum + s2.sum
        if sum >= MOD2:
            sum -= MOD2
        return S(sum, min(s1.l, s2.l), max(s1.r, s2.r))

    @staticmethod
    def map(f, s):
        c = (tenmod[(f.N-s.l)] - tenmod[(f.N-s.r-1)])
        if c < 0:
            c += MOD2
        return S(((f.D*c)%MOD2*inv9)%MOD2, s.l, s.r)

class F:
    I = F(0, 0)

    def __init__(self, D, N):
        self.D = D
        self.N = N

    @staticmethod
    def composite(f, g):
        return F(f.D, f.N)

MOD1 = 1000000007
MOD2 = 998244353
tenmod = []

def main():
    N, Q = map(int, input().split())
    tenmod = [0] * (N + 1)
    tenmod[0] = 1
    for j in range(1, N + 1):
        tenmod[j] = (tenmod[j-1] * 10) % MOD2
    dat = [S(tenmod[N-i-1], i, i) for i in range(N)]
    lazySegTree = LazySegTree(dat, S.op, S.E, S.map, F.composite, F.I)
    for j in range(Q):
        l, r, D = map(int, input().split())
        lazySegTree.apply(l, r+1, F(D, N))
        print(lazySegTree.allProd().sum)

class LazySegTree:
    def __init__(self, n, op, e, mapping, composition, id):
        self.MAX = n
        k = 1
        while k < n:
            k <<= 1
        self.N = k
        self.Log = len(bin(self.N)) - 2
        self.Op = op
        self.E = e
        self.Mapping = mapping
        self.Composition = composition
        self.Id = id
        self.Dat = [self.E] * (self.N << 1)
        self.Laz = [self.Id] * self.N
        for i in range(self.MAX):
            self.Dat[self.N + i] = self.E
        for i in range(self.N - 1, 0, -1):
            self.Dat[i] = self.Op(self.Dat[i << 1 | 0], self.Dat[i << 1 | 1])

    def push(self, k):
        if self.Laz[k] == self.Id:
            return
        lk = k << 1 | 0
        rk = k << 1 | 1
        self.Dat[lk] = self.Mapping(self.Laz[k], self.Dat[lk])
        self.Dat[rk] = self.Mapping(self.Laz[k], self.Dat[rk])
        if lk < self.N:
            self.Laz[lk] = self.Composition(self.Laz[k], self.Laz[lk])
        if rk < self.N:
            self.Laz[rk] = self.Composition(self.Laz[k], self.Laz[rk])
        self.Laz[k] = self.Id

    def pushTo(self, k):
        for i in range(self.Log, 0, -1):
            self.push(k >> i)

    def pushTo(self, lk, rk):
        for i in range(self.Log, 0, -1):
            if ((lk >> i) << i) != lk:
                self.push(lk >> i)
            if ((rk >> i) << i) != rk:
                self.push(rk >> i)

    def updateFrom(self, k):
        k >>= 1
        while k > 0:
            self.Dat[k] = self.Op(self.Dat[k << 1 | 0], self.Dat[k << 1 | 1])
            k >>= 1

    def updateFrom(self, lk, rk):
        for i in range(1, self.Log + 1):
            if ((lk >> i) << i) != lk:
                lki = lk >> i
                self.Dat[lki] = self.Op(self.Dat[lki << 1 | 0], self.Dat[lki << 1 | 1])
            if ((rk >> i) << i) != rk:
                rki = (rk - 1) >> i
                self.Dat[rki] = self.Op(self.Dat[rki << 1 | 0], self.Dat[rki << 1 | 1])

    def set(self, p, x):
        self.exclusiveRangeCheck(p)
        p += self.N
        self.pushTo(p)
        self.Dat[p] = x
        self.updateFrom(p)

    def get(self, p):
        self.exclusiveRangeCheck(p)
        p += self.N
        self.pushTo(p)
        return self.Dat[p]

    def allProd(self):
        return self.Dat[1]

    def apply(self, p, f):
        self.exclusiveRangeCheck(p)
        p += self.N
        self.pushTo(p)
        self.Dat[p] = self.Mapping(f, self.Dat[p])
        self.updateFrom(p)

    def apply(self, l, r, f):
        if l > r:
            raise Exception("Invalid range: [{}, {})".format(l, r))
        self.inclusiveRangeCheck(l)
        self.inclusiveRangeCheck(r)
        if l == r:
            return
        l += self.N
        r += self.N
        self.pushTo(l, r)
        while l < r:
            if (l & 1) == 1:
                self.Dat[l] = self.Mapping(f, self.Dat[l])
                if l < self.N:
                    self.Laz[l] = self.Composition(f, self.Laz[l])
                l += 1
            if (r & 1) == 1:
                r -= 1
                self.Dat[r] = self.Mapping(f, self.Dat[r])
                if r < self.N:
                    self.Laz[r] = self.Composition(f, self.Laz[r])
            l >>= 1
            r >>= 1
        self.updateFrom(l, r)

    def maxRight(self, l, g):
        self.inclusiveRangeCheck(l)
        if not g(self.E):
            raise Exception("Identity element must satisfy the condition.")
        if l == self.MAX:
            return self.MAX
        l += self.N
        self.pushTo(l)
        sum = self.E
        while True:
            l >>= l & -l
            if not g(self.Op(sum, self.Dat[l])):
                while l < self.N:
                    self.push(l)
                    l = l << 1
                    if g(self.Op(sum, self.Dat[l])):
                        sum = self.Op(sum, self.Dat[l])
                        l += 1
                return l - self.N
            sum = self.Op(sum, self.Dat[l])
            l += 1

    def minLeft(self, r, g):
        self.inclusiveRangeCheck(r)
        if not g(self.E):
            raise Exception("Identity element must satisfy the condition.")
        if r == 0:
            return 0
        r += self.N
        self.pushTo(r - 1)
        sum = self.E
        while True:
            r -= 1
            while r > 1 and (r & 1) == 1:
                r >>= 1
            if not g(self.Op(self.Dat[r], sum)):
                while r < self.N:
                    self.push(r)
                    r = r << 1 | 1
                    if g(self.Op(self.Dat[r], sum)):
                        sum = self.Op(self.Dat[r], sum)
                        r -= 1
                return r + 1 - self.N
            sum = self.Op(self.Dat[r], sum)

    def exclusiveRangeCheck(self, p):
        if p < 0 or p >= self.MAX:
            raise Exception("Index {} is not in [{}, {})".format(p, 0, self.MAX))

    def inclusiveRangeCheck(self, p):
        if p < 0 or p > self.MAX:
            raise Exception("Index {} is not in [{}, {}]".format(p, 0, self.MAX))

def main():
    N, Q = map(int, input().split())
    tenmod = [0] * (N + 1)
    tenmod[0] = 1
    for j in range(1, N + 1):
        tenmod[j] = (tenmod[j-1] * 10) % MOD2
    dat = [S(tenmod[N-i-1], i, i) for i in range(N)]
    lazySegTree = LazySegTree(dat, S.op, S.E, S.map, F.composite, F.I)
    for j in range(Q):
        l, r, D = map(int, input().split())
        lazySegTree.apply(l, r+1, F(D, N))
        print(lazySegTree.allProd().sum)