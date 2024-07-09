#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int maxn = 4010;
    int dp[maxn];
    for (int i = 0; i < maxn; i++)
        dp[i] = -1000000000;
    dp[0] = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = a; j < maxn; j++)
        {
            if (dp[j - a]!= -1000000000)
                dp[j] = max(dp[j], dp[j - a] + 1);
        }
    }
    cout << dp[n];
}