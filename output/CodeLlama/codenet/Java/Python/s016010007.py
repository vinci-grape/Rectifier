import sys

def jadgeClockwise(p0, p1, p2):
    v = Vector()
    a = p1.diff(p0)
    b = p2.diff(p0)

    if v.cross(a, b) >  v.EPS : return "COUNTER_CLOCKWISE"
    if v.cross(a, b) < -v.EPS : return "CLOCKWISE"
    if v.dot(a, b) < -v.EPS : return "ONLINE_BACK"
    if a.norm() < b.norm(): return "ONLINE_FRONT"

    return "ON_SEGMENT"

class Point2D(object):
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __str__(self):
        return "%.10f %.10f" % (self.x, self.y)

    def __eq__(self, other):
        return abs(self.x - other.x) < 1e-10 and abs(self.y - other.y) < 1e-10

    def __add__(self, other):
        return Point2D(self.x + other.x, self.y + other.y)

    def __sub__(self, other):
        return Point2D(self.x - other.x, self.y - other.y)

    def __mul__(self, k):
        return Point2D(self.x * k, self.y * k)

    def norm(self):
        return self.x * self.x + self.y * self.y

    def abs(self, a):
        return (a.x * a.x + a.y * a.y) ** 0.5

class Vector(Point2D):
    def __init__(self, x=0, y=0):
        super(Vector, self).__init__(x, y)

    def dot(self, a, b):
        return a.x * b.x + a.y * b.y

    def cross(self, a, b):
        return a.x * b.y - a.y * b.x

    def isOrthogonal(self, a, b):
        return self.dot(a, b) == 0

    def isOrthogonal(self, a1, a2, b1, b2):
        return self.isOrthogonal(a1.diff(a2), b1.diff(b2))

    def isParallel(self, a, b):
        return self.cross(a, b) == 0

    def isParallel(self, a1, a2, b1, b2):
        return self.isParallel(a1.diff(a2), b1.diff(b2))

    def project(self, sp1, sp2, p):
        base = sp2.diff(sp1)
        r = self.dot(p.diff(sp1), base) / base.norm()

        return sp1 + base * r

    def reflect(self, sp1, sp2, p):
        return p + (self.project(sp1, sp2, p) - p) * 2

if __name__ == '__main__':
    p0, p1, p2 = [Point2D(*map(float, sys.stdin.readline().split())) for _ in range(3)]
    q = int(sys.stdin.readline())

    for _ in range(q):
        p2 = Point2D(*map(float, sys.stdin.readline().split()))
        print(jadgeClockwise(p0, p1, p2))