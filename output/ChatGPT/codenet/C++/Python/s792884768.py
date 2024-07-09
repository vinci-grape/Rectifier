import sys

class TSize:
    def __init__(self, r=0, c=0):
        self.r = r
        self.c = c

class TMcmSolver:
    def __init__(self, chain):
        self.FMemo = [[0] * len(chain) for _ in range(len(chain))]
        self.FChain = chain
    
    @staticmethod
    def count(left, right):
        return left.r * right.c * left.c
    
    def solve(self, s, l):
        if s == l:
            return 0
        if self.FMemo[s][l] != 0:
            return self.FMemo[s][l]
        if s + 1 == l:
            self.FMemo[s][l] = self.count(self.FChain[s], self.FChain[l])
        else:
            min_cost = sys.maxsize
            for i in range(s, l):
                cost = self.solve(s, i) + self.count(TSize(self.FChain[s].r, self.FChain[i].c), TSize(self.FChain[i+1].r, self.FChain[l].c)) + self.solve(i+1, l)
                min_cost = min(min_cost, cost)
            self.FMemo[s][l] = min_cost
        return self.FMemo[s][l]

    def answer(self):
        return self.solve(0, len(self.FMemo)-1)

n = int(input())
if n == 1:
    print(0)
else:
    chain = []
    for _ in range(n):
        r, c = map(int, input().split())
        chain.append(TSize(r, c))
    solver = TMcmSolver(chain)
    print(solver.answer())