def main():
    n = int(input())
    a = [int(i) for i in input().split()]
    s = {}
    for i in range(n):
        if a[i] <= i:
            if i == 0:
                return False
            while s and s[-1] >= a[i]:
                s.pop()
            s[i] = s.get(i-1, 0) + 1
    if len(s)!= n:
        return False
    for i in range(n):
        if s[i]!= k:
            return False
    return True


class atcoder_AGC029_C:
    def __init__(self):
        self.n = int(input())
        self.a = [int(i) for i in input().split()]
        self.s = {}

    def solve(self):
        self.set()
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
                while self.s and self.s[-1] >= ai:
                    self.s.pop()
                self.s[ai] = self.s.get(ai-1, 0) + 1
            current = ai
        if len(self.s)!= self.n:
            return False
        for i in range(self.n):
            if self.s[i]!= k:
                return False
        return True