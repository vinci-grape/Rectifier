#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> coef;
    for (int i = 1; i <= sqrt(n); i++) {
        coef.push_back((n / i) - (n / (i + 1)));
    }
    coef.push_back(1);
    coef.resize(n - coef.size());
    reverse(coef.begin(), coef.end());
    int nn = coef.size();
    vector<vector<int>> dp(k + 1, vector<int>(nn));
    dp[0][0] = 1;
    for (int i = 1; i <= k; i++) {
        int tmp = 0;
        for (int j = nn - 1; j >= 0; j--) {
            tmp += dp[i - 1][(nn - 1) - j];
            tmp %= mod;
            dp[i][j] = coef[j] * tmp;
            dp[i][j] %= mod;
        }
    }
    int ans = 0;
    for (int i = 0; i < nn; i++) {
        ans += dp[k][i];
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}