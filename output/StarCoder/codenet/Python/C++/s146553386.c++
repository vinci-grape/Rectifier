#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a[2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            a[i].push_back(temp);
        }
    }
    reverse(a[1].begin(), a[1].end());
    vector<int> res_0(n);
    vector<int> res_1(n);
    for (int i = 0; i < n; i++)
    {
        res_0[i] = a[0][i] + (i > 0? res_0[i - 1] : 0);
    }
    for (int i = 0; i < n; i++)
    {
        res_1[i] = a[1][i] + (i > 0? res_1[i - 1] : 0);
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