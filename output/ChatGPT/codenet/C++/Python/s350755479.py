# Python code

class Node:
    def __init__(self, x, y, id):
        self.x = x
        self.y = y
        self.id = id

class Edge:
    def __init__(self, u, v, val):
        self.u = u
        self.v = v
        self.val = val

    def __lt__(self, rhs):
        return self.val < rhs.val

def init():
    global par
    par = [i for i in range(n + 1)]

def findpar(x):
    global par
    if par[x] == x:
        return x
    par[x] = findpar(par[x])
    return par[x]

def unite(x, y):
    global par
    x = findpar(x)
    y = findpar(y)
    if x == y:
        return
    par[x] = y

n = int(input())

init()

node = []
for i in range(1, n + 1):
    x, y = map(int, input().split())
    node.append(Node(x, y, i))

node.sort(key=lambda x: x.x)

cnt = 0
e = []
for i in range(1, n):
    e.append(Edge(node[i - 1].id, node[i].id, node[i].x - node[i - 1].x))
    cnt += 1

node.sort(key=lambda x: x.y)
for i in range(1, n):
    e.append(Edge(node[i - 1].id, node[i].id, node[i].y - node[i - 1].y))
    cnt += 1

e.sort()

ans = 0
for i in range(cnt):
    u = e[i].u
    v = e[i].v
    val = e[i].val
    if findpar(u) == findpar(v):
        continue
    unite(u, v)
    ans += val

print(ans)