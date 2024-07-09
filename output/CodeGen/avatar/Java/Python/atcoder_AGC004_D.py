class Calculator(object):
    def __init__(self, n, k, as):
        self.k = k
        self.lists = [[] for _ in range(n)]
        for i in range(n):
            self.lists[i].append(i)
        for i in range(n):
            if i > 0:
                self.lists[as[i]].append(i)
        self.isCalculate = False

    def calculate(self):
        if not self.isCalculate:
            self.dfs(0, 0)
            self.isCalculate = True
        return self.answer

    def dfs(self, a, pre):
        h = 0
        for i in self.lists[a]:
            h = max(h, self.dfs(i, a))
        if 0 < pre and h == self.k - 1:
            h = 0
            self.answer += 1
        else:
            h += 1
        return h


class MyRunnable(object):
    def __init__(self):
        self.n = 0
        self.k = 0
        self.as = []

    def run(self, *args, **kwargs):
        self.n, self.k, self.as = args
        self.calculator = Calculator(self.n, self.k, self.as)
        print(self.calculator.calculate())

class Calculator(object):
    def __init__(self, n, k, as):
        self.k = k
        self.lists = [[] for _ in range(n)]
        for i in range(n):
            self.lists[i].append(i)
        for i in range(n):
            if i > 0:
                self.lists[as[i]].append(i)
        self.isCalculate = False

    def calculate(self):
        if not self.isCalculate:
            self.dfs(0, 0)
            self.isCalculate = True
        return self.answer

    def dfs(self, a, pre):
        h = 0
        for i in self.lists[a]:
            h = max(h, self.dfs(i, a))
        if 0 < pre and h == self.k - 1:
            h = 0
            self.answer += 1
        else:
            h += 1
        return h