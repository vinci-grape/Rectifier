#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = (ans * a[i]) / __gcd(ans, a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = (sum + pow(a[i], MOD - 2, MOD)) % MOD;
    }
    cout << (ans * sum) % MOD;
    return 0;
}