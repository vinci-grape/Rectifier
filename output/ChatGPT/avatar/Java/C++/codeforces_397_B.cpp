#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
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
        long long x = b / (b - a);
        if (n > x * a) {
            cout << "Yes" << endl;
            continue;
        }
        long long low = 1;
        long long high = x + 1;
        long long ans = 1;
        while (low <= high) {
            long long mid = (low + high) / 2;
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