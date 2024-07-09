#include <bits/stdc++.h>
using namespace std;
int main()
{
    int S, W;
    cin >> S >> W;
    if (S <= W)
        cout << "safe";
    else
        cout << "unsafe";
    return 0;
}