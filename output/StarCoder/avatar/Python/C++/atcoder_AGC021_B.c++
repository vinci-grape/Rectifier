#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++) {
        double ans = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            double a = atan2(v[i].first - v[j].first, v[i].second - v[j].second);
            double b = atan2(v[i].first - v[j].first, v[i].second - v[j].second) + 2 * M_PI;
            ans += min(b - a, 2 * M_PI - (b - a));
        }
        cout << ans / (2 * M_PI) << '\n';
    }
}