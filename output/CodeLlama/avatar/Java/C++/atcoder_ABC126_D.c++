#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n - 1;
    vector<int> colors(n, -1);
    vector<Point> points(n);
    for (int i = 0; i < n; i++) {
        points[i] = Point(i);
    }
    while (m-- > 0) {
        int me, you;
        cin >> me >> you;
        me--;
        you--;
        int length;
        cin >> length;
        points[me].becomeFriend(points[you], length);
        points[you].becomeFriend(points[me], length);
    }
    dfs(points[0], 0);
    for (int c : colors) {
        cout << c << endl;
    }
}

class Point {
    int name;
    map<Point, int> friends;

public:
    Point(int name) {
        this->name = name;
    }

    void becomeFriend(Point p, int length) {
        this->friends[p] = length;
    }
};

void dfs(Point p, int length) {
    bool alreadyKnown = colors[p.name] != -1;
    if (alreadyKnown) return;
    if (length % 2 == 0) {
        colors[p.name] = 0;
    } else {
        colors[p.name] = 1;
    }
    for (auto entry : p.friends) {
        Point friend = entry.first;
        int length2 = entry.second;
        dfs(friend, length + length2);
    }
}