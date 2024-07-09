import math
import sys
import random

class Solver:
    def __init__(self):
        self.hp = Helper()

    def solve(self):
        tc = self.hp.nextInt()
        for tce in range(1, tc+1):
            self.solve(tce)
        self.hp.flush()

    def solve(self, tc):
        MAXN = 1000006
        MOD = int(1e9) + 7

        N = self.hp.nextInt()
        K = self.hp.nextLong()
        A = self.hp.getIntArray(N)

        straight = []
        cycle = []
        vis = [False] * N
        curr = 0
        while not vis[curr]:
            vis[curr] = True
            curr = A[curr] - 1

        st = 0
        while st != curr:
            straight.append(st)
            st = A[st] - 1

        cycle.append(curr)
        curr = A[curr] - 1
        while curr != cycle[0]:
            cycle.append(curr)
            curr = A[curr] - 1

        if K < len(straight):
            self.hp.println(straight[K] + 1)
        else:
            K -= len(straight)
            self.hp.println(cycle[K % len(cycle)] + 1)


class Helper:
    def __init__(self):
        self.MOD = 0
        self.MAXN = 0
        self.rnd = random.Random()

    def setFactorial(self):
        self.factorial = [0] * self.MAXN
        self.factorial[0] = 1
        for i in range(1, self.MAXN):
            self.factorial[i] = self.factorial[i - 1] * i % MOD

    def getFactorial(self, n):
        if not hasattr(self, 'factorial'):
            self.setFactorial()
        return self.factorial[n]

    def ncr(self, n, r):
        if r > n:
            return 0
        if not hasattr(self, 'factorial'):
            self.setFactorial()
        numerator = self.factorial[n]
        denominator = self.factorial[r] * self.factorial[n - r] % self.MOD
        return numerator * self.pow(denominator, self.MOD - 2, self.MOD) % self.MOD

    def getIntArray(self, size):
        ar = [0] * size
        for i in range(size):
            ar[i] = self.nextInt()
        return ar

    def joinElements(self, *ar):
        return ' '.join(map(str, ar))

    def gcd(self, a, b):
        return b if a == 0 else self.gcd(b % a, a)

    def max(self, *ar):
        return max(ar)

    def min(self, *ar):
        return min(ar)

    def sum(self, *ar):
        return sum(ar)

    def shuffle(self, ar):
        random.shuffle(ar)

    def reverse(self, ar):
        ar.reverse()

    def pow(self, base, exp, MOD):
        base %= MOD
        ret = 1
        while exp > 0:
            if exp & 1:
                ret = ret * base % MOD
            base = base * base % MOD
            exp >>= 1
        return ret

    def initIO(self, inputFile, outputFile):
        self.inp = open(inputFile, 'r')
        self.out = open(outputFile, 'w')

    def next(self):
        return next(self.inp).strip()

    def nextInt(self):
        return int(self.next())

    def nextLong(self):
        return int(self.next())

    def print(self, *args, **kwargs):
        print(*args, **kwargs, file=self.out)

    def flush(self):
        self.out.flush()


solver = Solver()
solver.solve()