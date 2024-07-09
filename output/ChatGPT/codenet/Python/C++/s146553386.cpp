#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(2, vector<int>(n));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    reverse(a[1].begin(), a[1].end());
    vector<int> res_0(n), res_1(n);
    partial_sum(a[0].begin(), a[0].end(), res_0.begin());
    partial_sum(a[1].begin(), a[1].end(), res_1.begin());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int check = res_0[i] + res_1[n-1-i];
        ans = max(ans, check);
    }
    cout << ans << endl;
    return 0;
}