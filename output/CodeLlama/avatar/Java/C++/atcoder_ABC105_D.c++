#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> dp;
    long ans = 0;
    int base = 0;
    for (int i = 0; i < n; i++)
    {
        base = (base - a[i] % m + m) % m;
        dp[((base + a[i]) % m)]++;
        ans += dp[base];
    }
    cout << ans << endl;
    return 0;
}