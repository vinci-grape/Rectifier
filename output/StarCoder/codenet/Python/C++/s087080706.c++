#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int i = lower_bound(a.begin(), a.end(), x) - a.begin();
    cout << min(i, n - i);
    return 0;
}