#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long n, a, b;
        cin >> n >> a >> b;
        if (n < a) {
            cout << "No" << endl;
            continue;
        }
        if (a == b) {
            if (n % a == 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            continue;
        }
        long x = b / (b - a);
        if (n > x * a) {
            cout << "Yes" << endl;
            continue;
        }
        long low = 1, high = x + 1, ans = 1;
        while (low <= high) {
            long mid = (low + high) / 2;
            if (mid * a < n) {
                low = mid + 1;
            } else {
                ans = mid;
                high = mid - 1;
            }
        }
        if (n > (ans - 1) * b && n < ans * a) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}