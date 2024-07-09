#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x = a[i];
            int j = lower_bound(b.begin(), b.end(), x) - b.begin();
            if (j < m && b[j] == x)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}