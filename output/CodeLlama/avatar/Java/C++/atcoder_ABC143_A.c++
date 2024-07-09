#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;
    c = a - b * 2;
    if (c < 0)
        c = 0;
    cout << c << endl;
    return 0;
}