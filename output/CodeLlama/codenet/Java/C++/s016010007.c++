#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Point2D {
  double x, y;
  Point2D() { x = 0.0; y = 0.0; }
  Point2D(double x, double y) { this->x = x; this->y = y; }
  Point2D operator+(const Point2D& b) { return Point2D(x + b.x, y + b.y); }
  Point2D operator-(const Point2D& b) { return Point2D(x - b.x, y - b.y); }
  Point2D operator*(double k) { return Point2D(x * k, y * k); }
  double norm() { return x * x + y * y; }
  double abs(Point2D a) { return sqrt(a.norm()); }
  double dot(Point2D b) { return x * b.x + y * b.y; }
  double cross(Point2D b) { return x * b.y - y * b.x; }
  bool equals(double a, double b) { return fabs(a - b) < 1e-10; }
  bool isOrthogonal(Point2D a, Point2D b) { return equals(dot(a,b) , 0.0); }
  bool isOrthogonal(Point2D a1, Point2D a2, Point2D b1, Point2D b2) {
    return isOrthogonal(a1.diff(a2), b1.diff(b2));
  }
  bool isParallel(Point2D a, Point2D b) { return equals(cross(a, b), 0.0); }
  bool isParallel(Point2D a1, Point2D a2, Point2D b1, Point2D b2) {
    return isParallel(a1.diff(a2), b1.diff(b2));
  }
  Point2D project(Point2D sp1, Point2D sp2, Point2D p) {
    Point2D base = sp2.diff(sp1);
    double r = dot(p.diff(sp1), base) / base.norm();

    return sp1 + base * r;
  }
  Point2D reflect(Point2D sp1, Point2D sp2, Point2D p) {
    return p + project(sp1,sp2,p).diff(p) * 2;
  }
};

int main() {
  Point2D p0, p1, p2;
  scanf("%lf %lf %lf %lf", &p0.x, &p0.y, &p1.x, &p1.y);
  int q;
  scanf("%d", &q);

  for(int i=0; i<q; i++) {
    scanf("%lf %lf", &p2.x, &p2.y);
    if(p0.isOrthogonal(p1, p2)) {
      printf("ON_SEGMENT\n");
    } else if(p0.isParallel(p1, p2)) {
      if(p0.abs(p1) < p0.abs(p2)) {
        printf("ONLINE_BACK\n");
      } else {
        printf("ONLINE_FRONT\n");
      }
    } else if(p0.cross(p1, p2) > 0) {
      printf("COUNTER_CLOCKWISE\n");
    } else if(p0.cross(p1, p2) < 0) {
      printf("CLOCKWISE\n");
    }
  }

  return 0;
}