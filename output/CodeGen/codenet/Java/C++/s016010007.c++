#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

class Point2D {
  public:
    double x, y;
    Point2D() { x = y = 0.0; }
    Point2D(double x, double y) { this->x = x; this->y = y; }
    Point2D(const Point2D& p) { x = p.x; y = p.y; }
    Point2D& operator=(const Point2D& p) { x = p.x; y = p.y; return *this; }
    Point2D operator+(const Point2D& p) const { return Point2D(x + p.x, y + p.y); }
    Point2D operator-(const Point2D& p) const { return Point2D(x - p.x, y - p.y); }
    Point2D operator*(double k) const { return Point2D(x * k, y * k); }
    Point2D operator/(double k) const { return Point2D(x / k, y / k); }
    Point2D operator*(const Point2D& p) const { return Point2D(x * p.x, y * p.y); }
    Point2D operator/(const Point2D& p) const { return Point2D(x / p.x, y / p.y); }
    double norm() const { return sqrt(x * x + y * y); }
    double abs(const Point2D& p) const { return sqrt(p.x * p.x + p.y * p.y); }
    double dot(const Point2D& a, const Point2D& b) const { return a.x * b.x + a.y * b.y; }
    double cross(const Point2D& a, const Point2D& b) const { return a.x * b.y - a.y * b.x; }
    bool equals(double a, double b) const { return abs(a - b) < EPS; }
    bool equals(const Point2D& a, const Point2D& b) const { return equals(a.x, b.x) && equals(a.y, b.y); }
    bool isOrthogonal(const Point2D& a, const Point2D& b) const { return equals(dot(a, b), 0.0); }
    bool isOrthogonal(const Point2D& a1, const Point2D& a2, const Point2D& b1, const Point2D& b2) const { return isOrthogonal(a1.diff(a2), b1.diff(b2)); }
    bool isParallel(const Point2D& a, const Point2D& b) const { return equals(cross(a, b), 0.0); }
    bool isParallel(const Point