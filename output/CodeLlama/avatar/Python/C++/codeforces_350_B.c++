#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t[100001], a[100001], cnt[100001], x, i, j, k, len, ans[100001];
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i <= n; i++)
    {
        cnt[i] = 0;
    }
    for (i = 1; i <= n; i++)
    {
        cnt[a[i]]++;
    }
    for (i = 1; i <= n; i++)
    {
        if (t[i] == 1)
        {
            x = a[i];
            len = 0;
            while (cnt[x] == 1)
            {
                ans[++len] = x;
                x = a[x];
            }
            if (len > j)
            {
                j = len;
            }
        }
    }
    cout << j << endl;
    for (i = 1; i <= j; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}