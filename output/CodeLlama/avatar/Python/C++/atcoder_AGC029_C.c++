#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<int, int>> dp;
    dp.push_back({a[0], 0});
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= dp[dp.size() - 1].first)
        {
            dp = cut(dp, a[i]);
        }
        else
        {
            dp.push_back({a[i], 0});
        }
        bool is_added = false;
        for (int j = dp.size() - 1; j > 0; j--)
        {
            if (dp[j].second < n - 1)
            {
                dp = cut(dp, dp[j].first - 1);
                dp.push_back({dp[j].first, dp[j].second + 1});
                if (dp[dp.size() - 1].first < a[i])
                {
                    dp.push_back({a[i], 0});
                }
                is_added = true;
                break;
            }
        }
        if (!is_added)
        {
            return 0;
        }
    }
    return 1;
}

int cut(vector<pair<int, int>> &dp, int index)
{
    if (index < 1)
    {
        return 0;
    }
    if (index <= dp[0].first)
    {
        return 1;
    }
    for (int i = dp.size() - 1; i > 0; i--)
    {
        if (dp[i - 1].first < index)
        {
            return i;
        }
    }
    return 0;
}