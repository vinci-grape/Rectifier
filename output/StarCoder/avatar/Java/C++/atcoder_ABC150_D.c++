#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] /= 2;
    }
    long long gcd, lcd = 1;
    for (int i = 0; i < n; i++) {
        gcd = __gcd(lcd, a[i]);
        lcd = lcd * a[i] / gcd;
        if (lcd > m) {
            cout << 0 << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if ((lcd / a[i]) % 2 == 0) {
            cout << 0 << endl;
            return 0;
        }
    }
    cout << (m / lcd + 1) / 2 << endl;
    return 0;
}