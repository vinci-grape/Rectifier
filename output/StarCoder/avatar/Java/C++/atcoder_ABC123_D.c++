#include <bits/stdc++.h>
using namespace std;

int main() {
    int x[3];
    for (int i = 0; i < 3; ++i) cin >> x[i];
    int max = 0;
    for (int i = 0; i < 3; ++i) max = max > x[i]? max : x[i];
    int k;
    cin >> k;
    long long a[3][max];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < x[i]; ++j) cin >> a[i][j];
        sort(a[i], a[i] + x[i]);
    }
    vector<long long> ans;
    for (int i = 0; i < x[0]; ++i) {
        for (int j = 0; j < x[1]; ++j) {
            for (int m = 0; m < x[2]; ++m) {
                if ((i + 1) * (j + 1) * (m + 1) <= k) {
                    long long tmp = a[0][x[0] - i - 1] + a[1][x[1] - j - 1] + a[2][x[2] - m - 1];
                    ans.push_back(tmp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    int n = ans.size();
    for (int i = 0; i < k; ++i) cout << ans[n - i - 1] << endl;
    return 0;
}