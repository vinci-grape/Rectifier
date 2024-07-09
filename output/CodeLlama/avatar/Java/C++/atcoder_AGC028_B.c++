#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mod = 1000000007;
    long p = 1;
    for (int i = 2; i <= n; i++) {
        p = (p * i) % mod;
    }
    vector<long> q(n);
    q[0] = 1;
    for (int i = 1; i < n; i++) {
        q[i] = (q[i - 1] + modinv(i + 1, mod)) % mod;
    }
    long ans = 0;
    for (int i = 0; i < n; i++) {
        long val = q[i] + q[n - i - 1] - 1;
        val *= a[i];
        val %= mod;
        val *= p;
        val %= mod;
        ans += val;
        ans %= mod;
    }
    cout << ans << endl;
}

long modinv(long a, int m) {
    long b = m;
    long u = 1;
    long v = 0;
    long tmp = 0;
    while (b > 0) {
        long t = a / b;
        a -= t * b;
        tmp = a;
        a = b;
        b = tmp;
        u -= t * v;
        tmp = u;
        u = v;
        v = tmp;
    }
    u %= m;
    if (u < 0)
        u += m;
    return u;
}