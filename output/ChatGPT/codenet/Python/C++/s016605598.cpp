#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;
    int const_val = 0;
    int cnt = 0;
    int left_sum = 0;
    int right_sum = 0;
    int q;

    cin >> q;
    for (int i = 0; i < q; ++i) {
        int t;
        cin >> t;
        if (t == 1) {
            int a, b;
            cin >> a >> b;
            const_val += b;
            if (cnt % 2 == 0) {
                if (right.empty()) {
                    left.push(-a);
                    left_sum += a;
                    ++cnt;
                    continue;
                }

                int c = right.top();
                right.pop();
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
                left.pop();
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
            ++cnt;
        } else {
            int tmp = -left.top();
            cout << tmp << " " << const_val - left_sum + right_sum + tmp * (cnt % 2) << endl;
        }
    }

    return 0;
}