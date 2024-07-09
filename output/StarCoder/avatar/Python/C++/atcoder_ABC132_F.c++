#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> coef(n);
    for (int i = 1; i <= n; i++)
        coef[i - 1] = (n / i) - (n / (i + 1));
    int nn = coef.size();
    vector<vector<int>> dp(k + 1, vector<int>(nn));
    dp[0][0] = 1;
    for (int i = 1; i <= k; i++)
    {
        int tmp = 0;
        for (int j = nn - 1; j >= 0; j--)
        {
            tmp += dp[i - 1][nn - 1 - j];
            tmp %= 1000000007;
            dp[i][j] = coef[j] * tmp;
            dp[i][j] %= 1000000007;
        }
    }
    cout << dp[k][0];
    return 0;
}