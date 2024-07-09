#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    int cnt = 0;
    long long left_sum = 0;
    long long right_sum = 0;
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int a, b;
            cin >> a >> b;
            const += b;
            if (cnt % 2 == 0) {
                if (right.empty()) {
                    left.push(-a);
                    left_sum += a;
                    cnt++;
                    continue;
                }
                int c = right.top();
                right_sum -= c;
                if (a <= c) {
                    left.push(-a);
                    right.push(c);
                    left_sum += a;
                    right_sum += c;
                } else {
                    left.push(-c);
                    right.push(a);
                    left_sum += c;
                    right_sum += a;
                }
            } else {
                int c = left.top();
                left_sum += c;
                if (a <= -c) {
                    left.push(-a);
                    right.push(-c);
                    left_sum += a;
                    right_sum -= c;
                } else {
                    left.push(c);
                    right.push(a);
                    left_sum -= c;
                    right_sum += a;
                }
            }
            cnt++;
        } else {
            int tmp = -left.top();
            cout << tmp << ' ' << const - left_sum + right_sum + tmp * (cnt % 2) << '\n';
        }
    }
    return 0;
}