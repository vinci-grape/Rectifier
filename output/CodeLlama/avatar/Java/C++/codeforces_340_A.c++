#include <iostream>
using namespace std;
int main() {
    long x, y, a, b, j, i, x1, y1, c;
    bool ans = true;
    cin >> x >> y >> a >> b;
    c = max(x, y);
    if (c > b) {
        cout << "0";
        ans = false;
    }
    while (c % min(x, y) != 0 && ans) {
        if (x > y) {
            c = x * j;
            j++;
        } else {
            c = y * j;
            j++;
        }
        if (c > b) {
            cout << "0";
            ans = false;
            break;
        }
    }
    if (ans) {
        long count = 0;
        i = a;
        for (i = a; i <= b; i++) {
            if (i % c == 0) break;
        }
        if (i != b + 1) cout << ((b - i) / c) + 1;
        else cout << "0";
    }
    return 0;
}