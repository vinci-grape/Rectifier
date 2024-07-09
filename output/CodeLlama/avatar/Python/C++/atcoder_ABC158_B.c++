#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, A, B;
    cin >> N >> A >> B;
    ll ans = 0;
    ll rep = N / (A + B);
    ans += rep * A;
    ll res = N - rep * (A + B);
    ans += min(res, A);
    cout << ans << endl;
    return 0;
}