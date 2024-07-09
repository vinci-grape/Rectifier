#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(3);
    for (int i = 0; i < 3; ++i) {
        cin >> x[i];
    }
    int k;
    cin >> k;
    vector<vector<long>> a(3);
    for (int i = 0; i < 3; ++i) {
        a[i].resize(x[i]);
        for (int j = 0; j < x[i]; ++j) {
            cin >> a[i][j];
        }
        sort(a[i].begin(), a[i].end());
    }
    vector<long> ans(k);
    for (int i = 0; i < x[0]; ++i) {
        for (int j = 0; j < x[1]; ++j) {
            for (int m = 0; m < x[2]; ++m) {
                if (i + 1 * j + 1 * m <= k) {
                    ans[k - i - 1 * j - 1 * m] = a[0][x[0] - i - 1] + a[1][x[1] - j - 1] + a[2][x[2] - m - 1];
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    int n = ans.size();
    for (int i = 0; i < k; ++i) {
        cout << ans[n - i - 1] << " ";
    }
    cout << endl;
    return 0;
}