#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    priority_queue<int, vector<int>, greater<int> > q1, q2;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        q1.push(x);
        q2.push(i);
    }
    int ans = 0;
    while (!q1.empty()) {
        if (q1.top() <= m) {
            q1.pop();
            ans = q2.pop();
        } else if (q1.top() > m) {
            int x = q1.top();
            q1.pop();
            int val = x - m;
            q1.push(val);
            int val2 = q2.pop();
            q2.push(val2);
        }
    }
    cout << ans << endl;
    return 0;
}