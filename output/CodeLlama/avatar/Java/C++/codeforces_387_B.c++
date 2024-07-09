#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> req;
    vector<int> pre;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        req.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        pre.push_back(x);
    }
    int i = n - 1, j = m - 1, ans = 0;
    while (i >= 0 && j >= 0)
    {
        if (req[i] > pre[j])
        {
            ans++;
        }
        else
        {
            j--;
        }
        i--;
    }
    cout << ans + i + 1;
}