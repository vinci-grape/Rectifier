#include <bits/stdc++.h>
using namespace std;
const int mod = (int)1e9 + 7;
const int DX[4] = { -1, 0, 1, 0 };
const int DY[4] = { 0, -1, 0, 1 };
int n;
long long k;
long long a[100010];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long INF = (long long)1e18 + 1;
    long long l = -INF;
    long long r = INF;
    while (l + 1 < r) {
        long long c = (l + r) / 2;
        if (check(c))
            l = c;
        else
            r = c;
    }
    cout << l << endl;
}
bool check(long long x) {
    long long tot = 0;
    for (int i = 0; i < n; i++) {
        long long now = a[i];
        int l = 0, r = n;
        if (now >= 0) {
            while (l < r) {
                int c = (l + r) / 2;
                if (now * a[c] < x)
                    l = c + 1;
                else
                    r = c;
            }
            tot += l;
        } else {
            while (l < r) {
                int c = (l + r) / 2;
                if (now * a[c] >= x)
                    l = c + 1;
                else
                    r = c;
            }
            tot += (n - l);
        }
        if (a[i] * a[i] < x)
            tot--;
    }
    if (tot / 2 < k)
        return true;
    else
        return false;
}