from collections import *

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

def cmp1(a, b):
    return a.x < b.x

def cmp2(a, b):
    return a.y < b.y

def init():
    for i in range(n + 1):
        par[i] = i

def findpar(x):
    if par[x] == x:
        return x
    return findpar(par[x])

def unite(x, y):
    x = findpar(x)
    y = findpar(y)
    if x == y:
        return
    par[x] = y

n = int(input())

node = [Node(0, 0, 0)] * (n + 1)
par = [0] * (n + 1)

init()

for i in range(1, n + 1):
    x, y = map(int, input().split())
    node[i] = Node(x, y, i)

node.sort(key = cmp1)

cnt = 0
for i in range(2, n + 1):
    e[cnt] = Edge(node[i - 1].id, node[i].id, node[i].x - node[i - 1].x)
    cnt += 1

node.sort(key = cmp2)
for i in range(2, n + 1):
    e[cnt] = Edge(node[i - 1].id, node[i].id, node[i].y - node[i - 1].y)
    cnt += 1

e.sort()

ans = 0
for i in range(cnt):
    u, v, val = e[i].u, e[i].v, e[i].val
    if findpar(u) == findpar(v):
        continue
    unite(u, v)
    ans += val

print(ans)