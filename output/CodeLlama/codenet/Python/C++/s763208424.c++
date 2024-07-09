#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    priority_queue<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push(-x);
    }
    auto dis = [](int x, int y) { return x >> y; };
    for (int i = 0; i < m; i++) {
        a.push(-dis(-a.top(), 1));
        a.pop();
    }
    int ans = 0;
    while (!a.empty()) {
        ans -= a.top();
        a.pop();
    }
    cout << ans << endl;
    return 0;
}