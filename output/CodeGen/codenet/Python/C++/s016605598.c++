#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>
using namespace std;

const int MAX = 1000005;
int const = 0;
int left_sum = 0;
int right_sum = 0;
int cnt = 0;

priority_queue<int, vector<int>, greater<int> > left;
priority_queue<int, vector<int>, less<int> > right;

void update(int a, int b) {
    const += b;
    if (cnt % 2 == 0) {
        if (right.empty()) {
            left.push(-a);
            left_sum += a;
            cnt += 1;
            return;
        }
        int c = right.top();
        right_sum -= c;
        if (a <= c) {
            left.push(-a);
            right.push(c);
            left_sum += a;
            right_sum += c;
        } else {
            left.push(c);
            right.push(-a);
            left_sum -= c;
            right_sum += a;
        }
    } else {
        if (left.empty()) {
            right.push(-a);
            right_sum += a;
            cnt += 1;
            return;
        }
        int c = left.top();
        left_sum -= c;
        if (a <= -c) {
            right.push(-c);
            left.push(a);
            right_sum += c;
            left_sum += a;
        } else {
            right.push(a);
            left.push(-c);
            right_sum -= c;
            left_sum -= a;
        }
    }
    cnt += 1;
}

int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if (a == 1) {
            update(b, 0);
        } else {
            update(0, -b);
        }
    }
    cout << left_sum << " " << right_sum << " " << cnt;
    return 0;
}