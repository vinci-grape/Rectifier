#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 998244353;
const int __N = 8000;
ll g1[__N + 1], g2[__N + 1], inverse[__N + 1];
ll cmb(ll n, ll r, ll mod) {
    if (r < 0 || r > n)
        return 0;
    r = min(r, n - r);
    return g1[n] * g2[r] * g2[n - r] % mod;
}
ll kumiawase(ll p, ll q) {
    return cmb(p + q - 1, q - 1, mod);
}
ll solve(ll n) {
    assert(n <= K + 1);
    ll ans = 0;
    ll kumi = (n - 1) / 2;
    for (ll p = kumi + 1; p <= N; p++) {
        ans += 2ll * p * cmb(kumi, p, mod) * kumiawase(N - p, p + (K - kumi * 2 - int(n % 2 == 0)));
        if (n % 2 == 0 && N - p - 1 >= 0)
            ans += 2ll * p * cmb(kumi, p, mod) * kumiawase(N - p - 1, p + (K - kumi * 2 - int(n % 2 == 0)));
    }
    return ans;
}
ll ans[2 * K + 1];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll K, N;
    cin >> K >> N;
    g1[0] = g1[1] = 1;
    g2[0] = g2[1] = 1;
    inverse[0] = 0;
    inverse[1] = 1;
    for (ll i = 2; i <= __N; i++) {
        g1[i] = (g1[i - 1] * i) % mod;
        inverse[i] = (-inverse[mod % i] * (mod / i)) % mod;
        g2[i] = (g2[i - 1] * inverse[i - 1]) % mod;
    }
    for (ll i = 2; i <= 2 * K + 1; i++) {
        if (i <= K + 1) {
            ll tmp = solve(i) % mod;
            ans[i] = tmp;
            cout << tmp << endl;
        } else {
            cout << ans[2 * K + 1 - i] << endl;
        }
    }
    return 0;
}