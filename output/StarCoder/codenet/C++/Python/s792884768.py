import sys

class TSize:
    def __init__(self, r, c):
        self.r = r
        self.c = c

class TMcmSolver:
    def __init__(self, chain):
        self.chain = chain
        self.memo = [[0 for i in range(len(chain))] for j in range(len(chain))]

    def count(self, left, right):
        return left.r * right.c * left.c

    def solve(self, s, l):
        assert(s <= l)
        if(s == l): return 0
        if(self.memo[s][l]!= 0): return self.memo[s][l]
        if(s + 1 == l):
            self.memo[s][l] = self.count(self.chain[s], self.chain[l])
        else:
            min = sys.maxsize
            for i in range(s, l):
                c = self.solve(s, i) + self.count(TSize(self.chain[s].r, self.chain[i].c), TSize(self.chain[i+1].r, self.chain[l].c)) + self.solve(i+1, l)
                min = min if min < c else c
            self.memo[s][l] = min
        return self.memo[s][l]

    def answer(self):
        return self.solve(0, len(self.chain)-1)

def main():
    n = int(input())
    if(n == 1):
        print(0)
        return 0
    chain = []
    for i in range(n):
        r, c = map(int, input().split())
        chain.append(TSize(r, c))
    solver = TMcmSolver(chain)
    print(solver.answer())

if __name__ == '__main__':
    main()