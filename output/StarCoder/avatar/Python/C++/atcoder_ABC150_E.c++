#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    sort(c.begin(), c.end(), greater<int>());
    long long int mod = 1000000007;
    long long int b = pow(2, 2 * n - 2, mod);
    long long int a = 2 * b % mod;
    long long int ans = 0;
    for (int i = 0; i < n; i++)
        ans += c[i] * (a + i * b);
    cout << ans % mod << endl;
    return 0;
}