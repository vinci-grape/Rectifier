#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Point2D {
public:
    double x, y;
    double EPS = 1e-10;

    Point2D() {}
    Point2D(double _x, double _y) : x(_x), y(_y) {}

    bool equals(double a, double b) {
        return abs(a - b) < EPS;
    }

    Point2D sum(Point2D b) {
        return Point2D(x + b.x, y + b.y);
    }

    Point2D diff(Point2D b) {
        return Point2D(x - b.x, y - b.y);
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

    friend ostream& operator<<(ostream& os, const Point2D& p) {
        os << fixed << setprecision(10) << p.x << " " << p.y;
        return os;
    }
};

class Vector : public Point2D {
public:
    Vector() {}
    Vector(double _x, double _y) : Point2D(_x, _y) {}
    Vector(Point2D p) : Point2D(p.x, p.y) {}

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

string jadgeClockwise(Point2D p0, Point2D p1, Point2D p2) {
    Vector v;
    Point2D a = p1.diff(p0);
    Point2D b = p2.diff(p0);

    if (v.cross(a, b) > v.EPS) { return "COUNTER_CLOCKWISE"; }
    if (v.cross(a, b) < -v.EPS) { return "CLOCKWISE"; }
    if (v.dot(a, b) < -v.EPS) { return "ONLINE_BACK"; }
    if (a.norm() < b.norm()) { return "ONLINE_FRONT"; }

    return "ON_SEGMENT";
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    vector<Point2D> points;
    for (int i = 0; i < 3; i++) {
        double x, y;
        cin >> x >> y;
        points.push_back(Point2D(x, y));
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        double x, y;
        cin >> x >> y;
        Point2D p2 = Point2D(x, y);
        cout << jadgeClockwise(points[0], points[1], p2) << "\n";
    }

    return 0;
}