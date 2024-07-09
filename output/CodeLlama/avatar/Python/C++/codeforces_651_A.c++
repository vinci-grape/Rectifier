#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y;
    cin >> x >> y;
    cout << max(x + y - 3 + (y - x) % 3 > 0, 0) << endl;
    return 0;
}