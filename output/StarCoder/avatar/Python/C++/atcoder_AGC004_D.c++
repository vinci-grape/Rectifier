#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 10;
int n, k, a[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) cnt++;
        }
        if (cnt >= k) ans++;
    }
    if (a[0]!= 0) ans++;
    cout << ans << endl;
    return 0;
}