#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int> > a(2, vector<int>(n));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
        reverse(a[i].begin(), a[i].end());
    }
    vector<int> res_0(n, 0);
    vector<int> res_1(n, 0);
    for (int i = 0; i < n; ++i) {
        res_0[i] = res_0[i-1] + a[0][i];
        res_1[n-1-i] = res_1[n-1-i+1] + a[1][n-1-i];
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int check = res_0[i] + res_1[n-1-i];
        ans = max(ans, check);
    }
    cout << ans << endl;
    return 0;
}