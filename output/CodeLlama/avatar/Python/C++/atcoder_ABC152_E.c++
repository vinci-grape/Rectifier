#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll lcm = 1;
    for (int i = 0; i < n; i++)
    {
        lcm = lcm * a[i] / __gcd(lcm, a[i]);
    }
    ll ans = lcm * (pow(a[0], MOD - 2, MOD) + pow(a[1], MOD - 2, MOD) + pow(a[2], MOD - 2, MOD) + pow(a[3], MOD - 2, MOD) + pow(a[4], MOD - 2, MOD)) % MOD;
    cout << ans << endl;
    return 0;
}