import java.awt.geom.Point2D.Double
import java.io.BufferedReader
import java.io.IOException
import java.io.InputStreamReader

import static java.lang.Integer.parseInt

def main():
  try:
    br = BufferedReader(InputStreamReader(System.in))
    p0 = Point2D(parseInt(br.readline().split(" ")[0]), parseInt(br.readline().split(" ")[1]))
    p1 = Point2D(parseInt(br.readline().split(" ")[2]), parseInt(br.readline().split(" ")[3]))
    q = parseInt(br.readline())
    buf = ""
    for i in range(q):
      p2 = Point2D(parseInt(br.readline().split(" ")[0]), parseInt(br.readline().split(" ")[1]))
      buf += jadgeClockwise(p0, p1, p2) + "\n"
    print(buf)
  except IOException as e:
    print(e)

def jadgeClockwise(p0, p1, p2):
  v = Vector()
  a = p1.diff(p0)
  b = p2.diff(p0)
  if v.cross(a, b) >  v.EPS: return "COUNTER_CLOCKWISE"
  if v.cross(a, b) < -v.EPS: return "CLOCKWISE"
  if v.dot(a, b) < -v.EPS: return "ONLINE_BACK"
  if a.norm() < b.norm(): return "ONLINE_FRONT"
  return "ON_SEGMENT"

class Point2D(Double):
  EPS = 1e-10
  def __init__(self, x, y):
    Double.__init__(self, x, y)
  def equals(self, a, b):
    return abs(a-b) < self.EPS
  def sum(self, b):
    return Point2D(self.x + b.x, self.y + b.y)
  def diff(self, b):
    return Point2D(self.x - b.x, self.y - b.y)
  def multiple(self, k):
    return Point2D(self.x * k, self.y * k)
  def norm(self):
    return self.x * self.x + self.y * self.y
  def abs(self, a):
    return sqrt(self.norm())

class Vector(Point2D):
  def dot(self, a, b):
    return a.x * b.x + a.y * b.y
  def cross(self, a, b):
    return a.x * b.y - a.y * b.x
  def isOrthogonal(self, a, b):
    return self.dot(a,b) == 0.