#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, q;
    cin >> a >> b >> q;
    long s[a + 2], t[b + 2];
    s[0] = t[0] = -10000000000;
    for (int i = 0; i < a; i++) {
        cin >> s[i + 1];
    }
    for (int i = 0; i < b; i++) {
        cin >> t[i + 1];
    }
    s[a + 1] = t[b + 1] = 20000000000;
    for (int i = 0; i < q; i++) {
        long x;
        cin >> x;
        long sl = x - s[max(0, lower_bound(s, x + 1) - 1)];
        long tl = x - t[max(0, lower_bound(t, x + 1) - 1)];
        long sr = s[lower_bound(s, x)] - x;
        long tr = t[lower_bound(t, x)] - x;
        cout << min({sl, tl, 2 * sl + tr, 2 * tl + sr, sl + 2 * tr, tl + 2 * sr}) << endl;
    }
    return 0;
}