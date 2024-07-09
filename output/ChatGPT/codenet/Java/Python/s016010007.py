import math

class Point2D:
    EPS = 1e-10
    
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y
        
    def __str__(self):
        return "{:.10f} {:.10f}".format(self.x, self.y)
    
    def __eq__(self, other):
        return math.isclose(self.x, other.x, abs_tol=self.EPS) and math.isclose(self.y, other.y, abs_tol=self.EPS)
    
    def __add__(self, other):
        return Point2D(self.x + other.x, self.y + other.y)
    
    def __sub__(self, other):
        return Point2D(self.x - other.x, self.y - other.y)
    
    def __mul__(self, scalar):
        return Point2D(self.x * scalar, self.y * scalar)
    
    def norm(self):
        return self.x ** 2 + self.y ** 2
    
    def abs(self):
        return math.sqrt(self.norm())
    
class Vector(Point2D):
    
    def dot(self, a, b):
        return a.x * b.x + a.y * b.y
    
    def cross(self, a, b):
        return a.x * b.y - a.y * b.x
    
    def is_orthogonal(self, a, b):
        return math.isclose(self.dot(a, b), 0.0, abs_tol=self.EPS)
    
    def is_parallel(self, a, b):
        return math.isclose(self.cross(a, b), 0.0, abs_tol=self.EPS)
    
    def project(self, sp1, sp2, p):
        base = Vector(sp2 - sp1)
        r = self.dot(p - sp1, base) / base.norm()
        return sp1 + base * r
    
    def reflect(self, sp1, sp2, p):
        return p + (self.project(sp1, sp2, p) - p) * 2.0
    
def jadge_clockwise(p0, p1, p2):
    v = Vector()
    a = p1 - p0
    b = p2 - p0
    
    if v.cross(a, b) > v.EPS:
        return "COUNTER_CLOCKWISE"
    if v.cross(a, b) < -v.EPS:
        return "CLOCKWISE"
    if v.dot(a, b) < -v.EPS:
        return "ONLINE_BACK"
    if a.norm() < b.norm():
        return "ONLINE_FRONT"
    
    return "ON_SEGMENT"

def main():
    line = input().split()
    p0 = Point2D(float(line[0]), float(line[1]))
    p1 = Point2D(float(line[2]), float(line[3]))
    q = int(input())
    
    res = []
    for _ in range(q):
        line = input().split()
        p2 = Point2D(float(line[0]), float(line[1]))
        res.append(jadge_clockwise(p0, p1, p2))
    
    for result in res:
        print(result)
    
if __name__ == "__main__":
    main()