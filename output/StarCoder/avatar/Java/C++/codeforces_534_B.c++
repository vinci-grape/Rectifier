#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v1, v2, t, d;
    cin >> v1 >> v2 >> t >> d;
    long long dp[t - 1][1150];
    for (int i = 0; i < t - 1; i++)
    {
        for (int j = 0; j < 1150; j++)
        {
            dp[i][j] = -1e17;
        }
    }
    dp[0][v1] = v1;
    long long sum = 0;
    for (int i = 1; i < t - 1; i++)
    {
        for (int j = 0; j < 1150; j++)
        {
            for (int x = 0; x <= d; x++)
            {
                if (j + x < 1150)
                {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j + x] + j);
                }
            }
            for (int x = d; x >= 0; x--)
            {
                if (j - x >= 0)
                {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - x] + j);
                }
            }
        }
    }
    long long ans = -1e17;
    for (int i = t - 2; i < t - 1; i++)
    {
        for (int j = 0; j < 1150; j++)
        {
            if (abs(j - v2) <= d)
            {
                ans = max(ans, dp[i][j] + v2);
            }
        }
    }
    cout << ans << endl;
    return 0;
}