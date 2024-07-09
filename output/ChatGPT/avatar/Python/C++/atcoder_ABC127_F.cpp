#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> ans(2);
    priority_queue<int> p1, p2;
    int sum_b = 0, sum_p1 = 0, sum_p2 = 0;

    for (int i = 0; i < q; i++) {
        int ql[3];
        for (int j = 0; j < 3; j++) {
            cin >> ql[j];
        }

        if (ql[0] == 2) {
            if (p1.size() == p2.size()) {
                cout << -p2.top() << " " << sum_p1 - p1.size() * -p2.top() + p2.size() * -p2.top() - sum_p2 + sum_b << endl;
            } else {
                cout << p1.top() << " " << sum_p1 - p1.size() * p1.top() + p2.size() * p1.top() - sum_p2 + sum_b << endl;
            }
        } else {
            sum_b += ql[2];
            if (p1.size() == 0 || p1.top() <= ql[1]) {
                p1.push(ql[1]);
                sum_p1 += ql[1];
            } else {
                p2.push(-ql[1]);
                sum_p2 += ql[1];
            }

            if (p1.size() < p2.size()) {
                int k = p2.top();
                p2.pop();
                p1.push(-k);
                sum_p2 += k;
                sum_p1 -= k;
            }

            if (p1.size() - 1 > p2.size()) {
                int k = p1.top();
                p1.pop();
                p2.push(-k);
                sum_p1 -= k;
                sum_p2 += k;
            }
        }
    }
}