#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2)
    {
        int dif = abs(y1 - y2);
        cout << (x1 + dif) << " " << y1 << " " << (x1 + dif) << " " << y2 << "\n";
    }
    else if (y1 == y2)
    {
        int dif = abs(x1 - x2);
        cout << x1 << " " << (y1 + dif) << " " << x2 << " " << (y2 + dif) << "\n";
    }
    else if (abs(x1 - x2) == abs(y1 - y2))
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
    return 0;
}