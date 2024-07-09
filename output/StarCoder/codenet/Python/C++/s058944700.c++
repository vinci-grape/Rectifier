#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (n > k) {
        int tmp = n % k;
        if (tmp >= k - tmp) {
            cout << k - tmp;
        } else {
            cout << tmp;
        }
    } else if (n < k) {
        if (n >= k - n) {
            cout << k - n;
        } else {
            cout << n;
        }
    } else {
        cout << 0;
    }
    return 0;
}