#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

const ll mod = 1000000007;

int main() {
    int n;
    cin >> n;

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    sort(c.rbegin(), c.rend());

    ll b = pow(2, 2 * n - 2) % mod;
    ll a = (2 * b) % mod;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += c[i] * (a + i * b);
        ans %= mod;
    }
    cout << ans << endl;


    return 0;
}