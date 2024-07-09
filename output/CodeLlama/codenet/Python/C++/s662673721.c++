#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int ans = 1e18;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i != 0)
            continue;
        int j = n / i;
        ans = min(ans, i + j - 2);
    }

    cout << ans << '\n';

    return 0;
}