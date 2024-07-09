import math

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

def sig(d):
    return 0 if abs(d) < 1e-8 else -1 if d < 0 else 1

def dot(o, a, b):
    return (a.x-o.x)*(b.x-o.x) + (a.y-o.y)*(b.y-o.y)

def cross(o, a, b):
    return (a.x - o.x)*(b.y - o.y)-(b.x - o.x)*(a.y - o.y)

def btw(x, a, b):
    return sig(dot(x, a, b))

def dis(a, b):
    return math.sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y))

def jarvis(p, n, ch):
    d = i = o = s = l = t = 0
    for d in range(n):
        if p[i] < p[d]:
            d = i
    l = s = ch[0] = d
    d = 1
    while l != s:
        o = l
        for i in range(n):
            if sig(cross(p[o], p[l], p[i])) > 0 or (sig(cross(p[o], p[l], p[i])) == 0 and btw(p[l], p[o], p[i]) <= 0):
                l = i
        ch[d] = l
        d += 1
    return d - 1

def main():
    n = int(input())
    P = []
    for i in range(n):
        x, y = map(int, input().split())
        P.append(Point(x, y))
    if n == 2:
        print("0.5")
        print("0.5")
    else:
        m = jarvis(P, n, [])
        sum = 0
        if m == 2:
            ans[ch[0]] = 0.5
            ans[ch[1]] = 0.5
        else:
            for i in range(m):
                ang[ch[i]] = math.pi - math.acos(cos(P[ch[i]], P[ch[(i-1+m)%m]], P[ch[(i+1)%m]]))
            for i in range(n):
                ans[i] = ang[i] / 2. / math.pi
        for i in range(n):
            print("%.20f" % ans[i])

main()