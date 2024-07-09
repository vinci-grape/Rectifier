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
    sort(a.begin(), a.end());
    int l = 0, r = 1e9, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (isPossible(a, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;
}

bool isPossible(vector<int> &a, int k)
{
    vector<pair<int, int>> dp;
    dp.push_back({a[0], 0});
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] <= dp.back().first)
        {
            dp = cut(dp, a[i]);
        }
        else
        {
            dp.push_back({a[i], 0});
        }
        bool isAdded = false;
        for (int j = dp.size() - 1; j >= 0; j--)
        {
            if (dp[j].second < k - 1)
            {
                dp = cut(dp, dp[j].first - 1);
                dp.push_back({dp[j].first, dp[j].second + 1});
                if (dp.back().first < a[i])
                {
                    dp.push_back({a[i], 0});
                }
                isAdded = true;
                break;
            }
        }
        if (!isAdded)
        {
            return false;
        }
    }
    return true;
}

vector<pair<int, int>> cut(vector<pair<int, int>> &array, int index)
{
    if (index < 1)
    {
        return {};
    }
    if (index <= array[0].first)
    {
        return {{index, array[0].second}};
    }
    for (int i = array.size() - 1; i >= 0; i--)
    {
        if (array[i - 1].first < index)
        {
            return vector<pair<int, int>>(array.begin(), array.begin() + i) +
                   {{index, array[i].second}};
        }
    }
}