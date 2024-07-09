def main():
    sc = Scanner()
    m = sc.nextInt()
    n = sc.nextInt()
    ft = codeforces_216_B()
    ft.graph = []
    for i in range(0, m + 1):
        ft.graph.append([])
    for i in range(0, n):
        x = sc.nextInt()
        y = sc.nextInt()
        ft.graph[x].append(y)
        ft.graph[y].append(x)
    for i in range(1, m + 1):
        if not ft.seen[i]:
            ft.count = 0
            if ft.dfs(i, 0) == ft.cycle:
                if ft.count % 2 == 1:
                    print(ft.count - 1)
                else:
                    print(ft.count)
                break
    if (m - ft.count) % 2 == 1:
        print(ft.count)

class codeforces_216_B:
    def __init__(self):
        self.count = 0
        self.seen = [False] * (m + 1)
        self.graph = []
        for i in range(0, m + 1):
            self.graph.append([])
        for i in range(0, n):
            x = sc.nextInt()
            y = sc.nextInt()
            self.graph[x].append(y)
            self.graph[y].append(x)
    def dfs(self, child, par):
        if self.seen[child] == True:
            return self.cycle
        self.seen[child] = True
        for i in self.graph[child]:
            if i!= par:
                self.count += 1
                if self.dfs(i, child) == self.cycle:
                    return self.cycle
        return self.path
main()