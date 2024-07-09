def main():
    
    n = int(input())
    
    node = [Node() for _ in range(n + 1)]
    
    for i in range(1, n + 1):
        node[i].x = int(input())
        node[i].y = int(input())
        node[i].id = i
    
    node.sort(key=lambda x: (x.x, x.y))
    
    e = []
    
    for i in range(2, n + 1):
        node[i - 1].id = i
        e.append(Edge(node[i - 1].id, node[i].id, node[i].x - node[i - 1].x))
    
    e.sort(key=lambda x: (x.val, x.u, x.v))
    
    ans = 0
    
    for i in range(len(e)):
        u = e[i].u
        v = e[i].v
        val = e[i].val
        if findpar(u) == findpar(v):
            continue
        unite(u, v)
        ans += val
    
    print(ans)
    
if __name__ == "__main__":
    main()