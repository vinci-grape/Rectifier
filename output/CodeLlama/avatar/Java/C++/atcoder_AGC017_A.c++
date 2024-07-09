#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll C(int n, int m) {
    ll res = 1;
    for (int i = m - n + 1; i <= m; i++) res *= i;
    for (int i = 1; i <= n; i++) res /= i;
    return res;
}

int main() {
    int n, p;
    int k0 = 0, k1 = 0;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 1) k1++;
        else k0++;
    }
    ll ans = 1;
    for (int i = 0; i < k0; i++) ans *= 2;
    if (p == 0) {
        ll add = 0;
        for (int i = 0; i <= k1; i += 2) add += C(i, k1);
        ans *= add;
        cout << ans << endl;
    } else {
        ll add = 0;
        for (int i = 1; i <= k1; i += 2) add += C(i, k1);
        ans *= add;
        cout << ans << endl;
    }
}