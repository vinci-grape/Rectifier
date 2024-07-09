import sys

class Main:
    def __init__(self):
        self.read = sys.stdin.readline
        self.read = self.read().split()
        self.N = int(self.read[0])
        self.u = int(self.read[1]) - 1
        self.v = int(self.read[2]) - 1
        self.edges = [[] for _ in range(self.N)]
        for _ in range(self.N - 1):
            a = int(self.read[3]) - 1
            b = int(self.read[4]) - 1
            self.edges[a].append(b)
            self.edges[b].append(a)
        self.d = [float('inf') for _ in range(self.N)]
        self.d[self.u] = 0
        self.dfs(self.u, self.d, self.edges)
        self.e = [float('inf') for _ in range(self.N)]
        self.e[self.v] = 0
        self.dfs(self.v, self.e, self.edges)
        self.q = -1
        for i in range(self.N):
            if self.d[i] < self.e[i]:
                if self.e[i] > self.q:
                    self.q = self.e[i]
        if self.q <= 0:
            print(0)
        else:
            print(self.q - 1)

    def dfs(self, u, d, edges):
        for nu in edges[u]:
            if d[nu] == float('inf'):
                d[nu] = d[u] + 1
                self.dfs(nu, d, edges)


if __name__ == '__main__':
    main = Main()