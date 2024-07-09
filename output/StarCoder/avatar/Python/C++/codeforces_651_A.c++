#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    cout << max(x + y - 3 + ((y - x) % 3 > 0), 0);
    return 0;
}