#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n == 0)
    {
        if (m!= 0)
            cout << "Impossible";
        else
            cout << 0 << " " << 0;
        return 0;
    }
    if (m <= n)
    {
        if (m == 0)
            m = 1;
        cout << n << " " << (m + n - 1);
        return 0;
    }
    cout << m << " " << (m + n - 1);
    return 0;
}