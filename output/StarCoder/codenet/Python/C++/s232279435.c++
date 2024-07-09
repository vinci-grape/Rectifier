#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        set<char> x;
        set<char> y;
        for (int j = 0; j < i + 1; j++)
        {
            x.insert(s[j]);
        }
        for (int j = i + 1; j < n; j++)
        {
            y.insert(s[j]);
        }
        int z = 0;
        for (auto w : x)
        {
            if (w in y)
            {
                z++;
            }
        }
        if (z > ans)
        {
            ans = z;
        }
    }
    cout << ans;
}