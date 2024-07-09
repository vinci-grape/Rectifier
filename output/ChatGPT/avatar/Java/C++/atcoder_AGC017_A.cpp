#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstring>
#include <climits>
#include <bitset>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

ll C(int n, int m) {
    ll res = 1;
    for (int i = m - n + 1; i <= m; i++) {
        res *= i;
    }
    for (int i = 1; i <= n; i++) {
        res /= i;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p;
    int k0 = 0;
    int k1 = 0;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 1) {
            k1++;
        } else {
            k0++;
        }
    }

    ll ans = 1;
    for (int i = 0; i < k0; i++) {
        ans *= 2;
    }

    if (p == 0) {
        ll add = 0;
        for (int i = 0; i <= k1; i += 2) {
            add += C(i, k1);
        }
        ans *= add;
        cout << ans << endl;
    } else {
        ll add = 0;
        for (int i = 1; i <= k1; i += 2) {
            add += C(i, k1);
        }
        ans *= add;
        cout << ans << endl;
    }

    return 0;
}

End of code.