#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int maxv = INT_MIN;
    int minv = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        int ri;
        cin >> ri;
        maxv = max(maxv, ri - minv);
        minv = min(minv, ri);
    }
    cout << maxv << endl;
    return 0;
}