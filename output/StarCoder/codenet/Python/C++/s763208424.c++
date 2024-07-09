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
    for (int i = 0; i < m; i++) {
        a.push(-floor(a.top() / 2));
        a.pop();
    }
    cout << -a.top();
    return 0;
}