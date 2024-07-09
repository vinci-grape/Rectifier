#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

#define N 100005

int n, a[N], p, q[N], ans;

int modinv(int a, int m) {
    int b = m, u = 1, v = 0, tmp;
    while (b > 0) {
        tmp = a / b;
        a -= tmp * b;
        tmp = u - tmp * v;
        u = v;
        v = tmp;
        b = tmp;
    }
    return u % m;
}

void solve() {
    int i, j;
    for (i = 2; i <= n; i++) {
        q[i] = q[i - 1] + modinv(i + 1, 1000000007);
        q[i] %= 1000000007;
    }
    for (i = 0; i < n; i++) {
        ans = (ans + q[i] * a[i]) % 1000000007;
    }
    cout << ans << endl;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        solve();
    }
    return 0;
}