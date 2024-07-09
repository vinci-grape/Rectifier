#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, gcd;
    cin >> n >> m;
    gcd = __gcd(n, m);
    string s, t;
    cin >> s >> t;
    cout << -1 * accumulate(0, gcd, 0, [&](int a, int i) {
        return a + (s[i * n / gcd] != t[i * m / gcd]);
    }) + (n / gcd) * (m / gcd);
}