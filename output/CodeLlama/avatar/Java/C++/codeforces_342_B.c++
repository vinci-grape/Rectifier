#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, s, f;
    cin >> m >> s >> f;
    int maxT = -1;
    map<int, pair<int, int>> map;
    while (m--) {
        int k, a, b;
        cin >> k >> a >> b;
        map[k] = make_pair(a, b);
        maxT = max(maxT, k);
    }
    string actions;
    char M = (s < f) ? 'R' : 'L';
    int d = (s < f) ? 1 : -1;
    int cur = s;
    int a = -1, b = -1;
    for (int t = 1; t <= maxT; t++) {
        if (map.find(t) != map.end()) {
            a = map[t].first;
            b = map[t].second;
        }
        if (map.find(t) != map.end() && (cur >= a && cur <= b || cur + d >= a && cur + d <= b)) {
            actions += 'X';
        } else {
            actions += M;
            cur += d;
        }
        if (cur == f) break;
    }
    while (cur != f) {
        actions += M;
        cur += d;
    }
    cout << actions << endl;
    return 0;
}