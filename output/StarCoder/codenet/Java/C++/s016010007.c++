#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cstdlib>
#include <ctime>

using namespace std;

class Point2D {
public:
    double x, y;
    Point2D(double x = 0.0, double y = 0.0) {
        this->x = x;
        this->y = y;
    }
    Point2D diff(Point2D b) {
        return Point2D(x - b.x, y - b.y);
    }
    Point2D sum(Point2D b) {
        return Point2D(x + b.x, y + b.y);
    }
    Point2D multiple(double k) {
        return Point2D(x * k, y * k);
    }
    double norm() {
        return x * x + y * y;
    }
    double abs(Point2D a) {
        return sqrt(a.norm());
    }
    bool equals(double a, double b) {
        return abs(a - b) < 1e-10;
    }
    bool operator<(const Point2D &b) const {
        if (x!= b.x)
            return x < b.x;
        return y < b.y;
    }
    bool operator==(const Point2D &b) const {
        return equals(x, b.x) && equals(y, b.y);
    }
    bool operator!=(const Point2D &b) const {
        return!(*this == b);
    }
    friend ostream &operator<<(ostream &os, const Point2D &p) {
        os << p.x << " " << p.y;
        return os;
    }
};

class Vector : public Point2D {
public:
    Vector() {}
    Vector(Point2D p) : Point2D(p.x, p.y) {}
    Vector(double x, double y) : Point2D(x, y) {}
    double dot(Point2D a, Point2D b) {
        return a.x * b.x + a.y * b.y;
    }
    double cross(Point2D a, Point2D b) {
        return a.x * b.y - a.y * b.x;
    }
    bool isOrthogonal(Point2D a, Point2D b) {
        return equals(dot(a, b), 0.0);
    }
    bool isOrthogonal(Point2D a1, Point2D a2, Point2D b1, Point2D b2) {
        return isOrthogonal(a1.diff(a2), b1.diff(b2));
    }
    bool isParallel(Point2D a, Point2D b) {
        return equals(cross(a, b), 0.0);
    }
    bool isParallel(Point2D a1, Point2D a2, Point2D b1, Point2D b2) {
        return isParallel(a1.diff(a2), b1.diff(b2));
    }
    Point2D project(Point2D sp1, Point2D sp2, Point2D p) {
        Vector base = Vector(sp2.diff(sp1));
        double r = dot(p.diff(sp1), base) / base.norm();
        return sp1.sum(base.multiple(r));
    }
    Point2D reflect(Point2D sp1, Point2D sp2, Point2D p) {
        return p.sum(project(sp1, sp2, p).diff(p).multiple(2.0));
    }
};

class Main {
public:
    int n;
    Point2