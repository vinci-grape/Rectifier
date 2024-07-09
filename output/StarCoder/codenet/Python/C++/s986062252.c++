#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int aa = gcd(n, m);
    int bb = lcm(n, m);
    int cc = aa / bb;
    for (int i = 0; i < aa; i++) {
        if (s[n / aa * i]!= t[m / aa * i]) {
            cout << -1;
            return 0;
        }
    }
    cout << bb;
    return 0;
}