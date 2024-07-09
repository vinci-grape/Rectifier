#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> w;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        w[x]++;
    }
    int c = 0;
    for (auto i : w)
    {
        if (i.first == 0)
        {
            c += w[i.first] * (w[i.first] - 1);
        }
        else
        {
            if (-i.first in w)
            {
                c += w[i.first] * w[-i.first];
            }
        }
    }
    cout << c / 2;
    return 0;
}