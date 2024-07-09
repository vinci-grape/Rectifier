#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<string> vs;
const int mod = 1e9 + 7;
const int N = 1e6 + 10;
int n;
int main() {
    cin >> n;
    vi fac;
    while (n % 2 == 0) {
        fac.pb(2);
        n /= 2;
    }
    int f = 3;
    while (f * f <= n) {
        if (n % f == 0) {
            fac.pb(f);
            n /= f;
        } else {
            f += 2;
        }
    }
    if (n!= 1) fac.pb(n);
    int ans = 0;
    for (int p : fac) {
        int x = p;
        for (int i = 1; i < 1e9; i++) {
            if (x >= i) {
                x -= i;
                ans++;
            } else {
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}