#include <iostream>
#include <map>
using namespace std;

int main() {
    int a[5];
    int r[5];
    map<int, int> m;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        r[i] = a[i] % 10;
        int b = 10;
        if (r[i] != 0) {
            b = 10 - r[i];
            m[b] = a[i];
        }
    }
    int ans = 0;
    if (m.size() == 0) {
        for (int i = 0; i < 5; i++) {
            ans += a[i];
        }
        cout << ans << endl;
        return 0;
    }
    int last = m.rbegin()->second;
    int idx = 0;
    for (int i = 0; i < 5; i++) {
        if (a[i] == last) {
            idx = i;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i != idx) {
            if (a[i] % 10 == 0) {
                ans += a[i];
            }
            else {
                ans += a[i] + (10 - r[i]);
            }
        }
    }
    ans += last;
    cout << ans << endl;

    return 0;
}