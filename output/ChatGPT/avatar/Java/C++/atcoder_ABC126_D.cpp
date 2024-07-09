#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Point {
public:
    int name;
    map<Point*, int> friends;

    Point(int name) {
        this->name = name;
    }

    void becomeFriend(Point* p, int length) {
        this->friends[p] = length;
    }
};

vector<int> colors;

void dfs(Point* p, int length) {
    bool alreadyKnown = colors[p->name] != -1;
    if (alreadyKnown) return;
    if (length % 2 == 0) {
        colors[p->name] = 0;
    } else {
        colors[p->name] = 1;
    }
    for (auto it = p->friends.begin(); it != p->friends.end(); ++it) {
        Point* friend = it->first;
        int length2 = it->second;
        dfs(friend, length + length2);
    }
}

int main() {
    int n;
    cin >> n;
    int m = n - 1;
    colors.resize(n, -1);
    vector<Point*> points(n);
    for (int i = 0; i < n; i++) {
        points[i] = new Point(i);
    }
    while (m-- > 0) {
        int me, you, length;
        cin >> me >> you >> length;
        points[me - 1]->becomeFriend(points[you - 1], length);
        points[you - 1]->becomeFriend(points[me - 1], length);
    }
    dfs(points[0], 0);
    for (int c : colors) {
        cout << c << endl;
    }
    return 0;
}