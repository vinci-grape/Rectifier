#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;
const int N = 1000;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> fact(N * N);
    fact[0] = 1;
    for (int n = 1; n < N; n++) {
        for (int i = 0; i < N; i++) {
            fact[n * N + i] = fact[n * N + i - 1] * fact[i] % MOD;
        }
    }
    for (int n = 1; n < N; n++) {
        for (int i = 0; i < N; i++) {
            fact[n] = fact[n] * fact[n - 1] % MOD;
        }
    }
    vector<ll> inv(N);
    for (int i = 0; i < N; i++) {
        inv[i] = pow(i + 1, MOD - 2, MOD);
    }
    vector<ll> temp(N);
    for (int i = 0; i < N; i++) {
        temp[i] = inv[i] + inv[N - 1 - i] - 1;
        temp[i] %= MOD;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * temp[i];
        ans %= MOD;
    }
    ans %= MOD;
    ans *= fact[N];
    ans %= MOD;
    cout << ans << endl;
    return 0;
}