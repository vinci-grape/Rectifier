#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dp[200001];
    for (int i = 0; i < n; i++)
    {
        cin >> dp[i];
    }
    long long ans = 0;
    for (int i = 2; i <= n; i++)
    {
        ans += abs(dp[i] - dp[i - 1]);
    }
    cout << ans << endl;
    return 0;
}