#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int sa = 0;
    for (int i = 0; i < n; i++)
    {
        if (cin.get() == '-')
            sa++;
    }
    sa = min(n - sa, sa);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        b -= a;
        cout << (b % 2 && b <= sa << 1? "1\n" : "0\n");
    }
    return 0;
}