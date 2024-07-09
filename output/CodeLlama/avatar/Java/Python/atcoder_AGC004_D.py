import sys
import threading


class MyThread(threading.Thread):
    def __init__(self, args):
        threading.Thread.__init__(self)
        self.args = args

    def run(self):
        sys.setrecursionlimit(10 ** 6)
        self.args[0](*self.args[1:])


def main():
    n, k = map(int, input().split())
    as = list(map(int, input().split()))
    print(Calculator(n, k, as).calculate())


class Calculator:
    def __init__(self, n, k, as):
        self.k = k
        self.answer = 0
        self.isCalculate = False
        self.lists = [[] for _ in range(n)]
        for i in range(n):
            j = as[i] - 1
            if 0 < i:
                self.lists[j].append(i)
            elif 0 < j:
                self.answer += 1

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


if __name__ == "__main__":
    MyThread(tuple(list(locals().values()))).start()