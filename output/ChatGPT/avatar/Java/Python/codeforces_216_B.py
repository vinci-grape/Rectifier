import sys

class Codeforces_216_B:
    def __init__(self):
        self.count = 0
        self.seen = []
        self.path = 0
        self.cycle = 1
        self.graph = []

    def dfs(self, child, par):
        if self.seen[child]:
            return self.cycle
        self.seen[child] = True
        for i in self.graph[child]:
            if i != par:
                self.count += 1
                if self.dfs(i, child) == self.cycle:
                    return self.cycle
        return self.path

if __name__ == "__main__":
    m, n = map(int, sys.stdin.readline().split())
    ft = Codeforces_216_B()
    ft.graph = [[] for _ in range(m + 1)]
    ft.seen = [False] * (m + 1)
    for _ in range(n):
        x, y = map(int, sys.stdin.readline().split())
        ft.graph[x].append(y)
        ft.graph[y].append(x)
    toremove = 0
    for i in range(1, m + 1):
        if not ft.seen[i]:
            ft.count = 0
            if ft.dfs(i, 0) == ft.cycle:
                if ft.count % 2 == 1:
                    toremove += 1
    if (m - toremove) % 2 == 1:
        toremove += 1
    print(toremove)