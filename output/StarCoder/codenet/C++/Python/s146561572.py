#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) int(x.size())

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 1; i <= n; i++) {
            ans += i * (n - i + 1);
        }
        for (ll i = 1; i < n; i++) {
            ll u, v;
            cin >> u >> v;
            ll a = max(u, v);
            ll b = min(u, v);
            ans -= b * (n - a + 1);
        }
        cout << ans << endl;
    }
    return 0;
}

Time Complexity: O(N^2)
Space Complexity: O(1)