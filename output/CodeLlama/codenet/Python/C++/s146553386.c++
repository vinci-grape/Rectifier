#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(2);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    reverse(a[1].begin(), a[1].end());
    vector<int> res_0(n);
    vector<int> res_1(n);
    for (int i = 0; i < n; i++)
    {
        res_0[i] = accumulate(a[0].begin() + i, a[0].end(), 0);
        res_1[i] = accumulate(a[1].begin() + i, a[1].end(), 0);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int check = res_0[i] + res_1[n - 1 - i];
        ans = max(ans, check);
    }
    cout << ans << endl;
    return 0;
}