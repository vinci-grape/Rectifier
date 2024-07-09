import sys

n = int(sys.stdin.readline().strip())
m = n - 1
colors = [-1] * n
points = [None] * n
for i in range(n):
    points[i] = Point(i)
while m > 0:
    me, you, length = map(int, sys.stdin.readline().strip().split())
    points[me - 1].becomeFriend(points[you - 1], length)
    points[you - 1].becomeFriend(points[me - 1], length)
    m -= 1
dfs(points[0], 0)
for c in colors:
    print(c)


class Point:
    def __init__(self, name):
        self.name = name
        self.friends = {}

    def becomeFriend(self, p, length):
        self.friends[p] = length


def dfs(p, length):
    already_known = colors[p.name] != -1
    if already_known:
        return
    if length % 2 == 0:
        colors[p.name] = 0
    else:
        colors[p.name] = 1
    for entry in p.friends.items():
        friend = entry[0]
        length2 = entry[1]
        dfs(friend, length + length2)