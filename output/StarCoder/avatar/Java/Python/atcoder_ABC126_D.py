import sys

class Point:
    def __init__(self, name):
        self.name = name
        self.friends = {}

def dfs(p, length):
    if colors[p.name]!= -1:
        return
    if length % 2 == 0:
        colors[p.name] = 0
    else:
        colors[p.name] = 1
    for friend, length2 in p.friends.items():
        dfs(friend, length + length2)

n = int(input())
m = n - 1
colors = [-1] * n
points = [Point(i) for i in range(n)]
while m > 0:
    me, you, length = map(int, input().split())
    me -= 1
    you -= 1
    points[me].becomeFriend(points[you], length)
    points[you].becomeFriend(points[me], length)
    m -= 1
dfs(points[0], 0)
for c in colors:
    print(c)