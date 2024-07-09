#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, sa;
    cin >> n >> m;
    cin >> sa;
    sa = min(n - sa, sa);
    string ss;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        b -= a;
        ss += (b % 2 && b <= sa * 2) ? "1\n" : "0\n";
    }
    cout << ss;
}