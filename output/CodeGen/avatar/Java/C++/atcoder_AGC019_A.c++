#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

const int maxn = 1005;

int n, m;
ll a[maxn], b[maxn], c[maxn];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    for (int i = 0; i < m; i++) scanf("%lld", &b[i]);
    for (int i = 0; i < m; i++) scanf("%lld", &c[i]);
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll t = 0;
        for (int j = 0; j < m; j++) {
            ll x = max(0ll, a[i] - b[j]);
            ll y = max(0ll, b[j] - c[i]);
            ll z = max(0ll, c[i] - a[i]);
            t = max(t, x + y + z);
        }
        ans = max(ans, t);
    }
    printf("%lld\n", ans);
    return 0;
}