import math

class Main:
    def __init__(self):
        self.EPS = 1e-10

    def run(self):
        p0, p1, p2 = self.input()
        q = self.input()
        buf = []
        for i in range(q):
            p3 = self.input()
            buf.append(self.judgeClockwise(p0, p1, p2, p3))
        print('\n'.join(buf))

    def input(self):
        return map(float, input().split())

    def judgeClockwise(self, p0, p1, p2, p3):
        v = Vector()
        a = v.diff(p1, p0)
        b = v.diff(p2, p0)

        if v.cross(a, b) >  v.EPS : return "COUNTER_CLOCKWISE"
        if v.cross(a, b) < -v.EPS : return "CLOCKWISE"
        if v.dot(a, b) < -v.EPS : return "ONLINE_BACK"
        if v.norm(a) < v.norm(b) : return "ONLINE_FRONT"

        return "ON_SEGMENT"

class Point2D:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def diff(self, p):
        return Point2D(self.x - p.x, self.y - p.y)

    def sum(self, p):
        return Point2D(self.x + p.x, self.y + p.y)

    def multiple(self, k):
        return Point2D(self.x * k, self.y * k)

    def norm(self):
        return self.x * self.x + self.y * self.y

    def abs(self, p):
        return math.sqrt(p.norm())

class Vector(Point2D):
    def dot(self, a, b):
        return a.x * b.x + a.y * b.y

    def cross(self, a, b):
        return a.x * b.y - a.y * b.x

    def isOrthogonal(self, a, b):
        return self.dot(a, b) == 0.0

    def isParallel(self, a, b):
        return self.cross(a, b) == 0.0

    def project(self, sp1, sp2, p):
        base = Vector(sp2.diff(sp1))
        r = self.dot(p.diff(sp1), base) / base.norm()

        return sp1.sum(base.multiple(r))

    def reflect(self, sp1, sp2, p):
        return p.sum(self.project(sp1, sp2, p).diff(p).multiple(2.0))

if __name__ == '__main__':
    main = Main()
    main.run()