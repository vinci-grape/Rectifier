def main():
    n = int(input())
    g = []
    for i in range(n):
        g.append([])
    for i in range(n-1):
        a = int(input())
        b = int(input())
        g[a-1].append(Edge(i,b-1))
        g[b-1].append(Edge(i,a-1))
    ans = [0]*(n-1)
    dfs(0,-1,-1)
    max = 0
    for i in ans:
        max = max if max > i else i
    print(max)
    for i in ans:
        print(i)

class Edge:
    def __init__(self,id,to):
        self.id = id
        self.to = to

def dfs(to,color,parents):
    k = 1
    for e in g[to]:
        if e.to == parents:
            continue
        if k == color:
            k += 1
        ans[e.id] = k
        dfs(e.to,k,to)
        k += 1

main()