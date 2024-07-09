#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    sort(c, c + n);
    long long b = 1;
    long long a = 1;
    long long ans = 0;
    for (int i = 2; i <= n + 1; i++)
    {
        long long val = a * i % 1000000007;
        val *= c[n + 1 - i];
        val %= 1000000007;
        ans += val;
        ans %= 1000000007;
    }
    ans *= b;
    ans %= 1000000007;
    cout << ans << endl;
    return 0;
}