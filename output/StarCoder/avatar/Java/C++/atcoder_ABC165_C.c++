#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(q), b(q), c(q), d(q);
    for (int i = 0; i < q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        a[i]--;
        b[i]--;
    }
    long long ans = -100;
    for (int i = 0; i < (1 << n); i++) {
        vector<int> list;
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                list.push_back(j);
            }
        }
        long long score = 0;
        for (int j = 0; j < q; j++) {
            score += (list[b[j]] - list[a[j]] == c[j])? d[j] : 0;
        }
        ans = max(ans, score);
    }
    cout << ans << endl;
}