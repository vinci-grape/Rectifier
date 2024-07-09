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
    long gcd;
    long lcd = 1;
    for (int i = 0; i < n; i++) {
        gcd = getGCD(lcd, a[i]);
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
long getGCD(long a, long b) {
    if (b == 0) {
        return a;
    } else {
        return getGCD(b, a % b);
    }
}