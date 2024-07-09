import sys

class AtcoderAGC029C:
    def __init__(self):
        self.n = 0
        self.a = []
        self.s = {}

    def set_values(self):
        self.n = int(sys.stdin.readline())
        self.a = list(map(int, sys.stdin.readline().split()))
        self.s = {}

    def solve(self):
        self.set_values()
        ng = 0
        ok = self.n
        while ok - ng > 1:
            k = (ng + ok) // 2
            if self.is_possible(k):
                ok = k
            else:
                ng = k
        print(ok)

    def is_possible(self, k):
        self.s.clear()
        current = 0
        for ai in self.a:
            if ai <= current:
                if k == 1:
                    return False
                while self.s and list(self.s.keys())[-1] >= ai:
                    self.s.popitem()
                p = ai - 1
                while True:
                    if p < 0:
                        return False
                    sp = self.s.get(p, 0) + 1
                    self.s[p] = sp
                    if sp == k:
                        self.s.pop(p)
                        p -= 1
                    else:
                        break
            current = ai
        return True

if __name__ == '__main__':
    m = AtcoderAGC029C()
    m.solve()