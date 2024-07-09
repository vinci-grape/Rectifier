import sys

class Main:
    def __init__(self):
        self.graph = []
        self.counter = []

    def dfs(self,v,par,val):
        for i in self.graph[v]:
            if i!=par:
                self.dfs(i,v,val+self.counter[v])
        self.counter[v]+=val

    def main(self):
        n = int(sys.stdin.readline())
        q = int(sys.stdin.readline())
        for i in range(n):
            self.graph.append([])
            self.counter.append(0)
        for i in range(n-1):
            a,b = map(int,sys.stdin.readline().split())
            self.graph[a-1].append(b-1)
            self.graph[b-1].append(a-1)
        for i in range(q):
            a,b = map(int,sys.stdin.readline().split())
            self.counter[a-1]+=b
        self.dfs(0,-1,0)
        print(" ".join(map(str,self.counter)))

if __name__ == "__main__":
    obj = Main()
    obj.main()