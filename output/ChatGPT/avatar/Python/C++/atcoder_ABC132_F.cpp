#include <iostream>
#include <vector>
using namespace std;
const int mod = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> coef;
    for (int i = 1; i <= sqrt(n); i++) {
        coef.push_back(n / i - n / (i + 1));
    }
    coef.insert(coef.end(), n - accumulate(coef.begin(), coef.end(), 0));
    reverse(coef.begin(), coef.end());
    int nn = coef.size();
    vector<vector<int>> dp(k + 1, vector<int>(nn));
    dp[0][0] = 1;
    for (int i = 1; i <= k; i++) {
        int tmp = 0;
        for (int j = nn - 1; j >= 0; j--) {
            tmp += dp[i - 1][nn - 1 - j];
            tmp %= mod;
            dp[i][j] = coef[j] * tmp % mod;
        }
    }
    int ans = accumulate(dp[k].begin(), dp[k].end(), 0) % mod;
    cout << ans << endl;
    return 0;
}