#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, u;
    int a, b;
    cin >> s >> a >> b >> u;
    if (u == s)
        cout << a - 1 << " " << b;
    else
        cout << a << " " << b - 1;
}