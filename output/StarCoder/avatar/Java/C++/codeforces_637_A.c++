#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (!m.count(a[i]))
        {
            m[a[i]] = 1;
        }
        else
        {
            m[a[i]]++;
        }
    }
    int max = 0;
    for (auto i : m)
    {
        max = max > i.second? max : i.second;
    }
    map<int, int> mm;
    for (int i = 0; i < n; i++)
    {
        if (!mm.count(a[i]))
        {
            mm[a[i]] = 1;
            if (mm[a[i]] == max)
            {
                cout << a[i] << endl;
                return 0;
            }
        }
        else
        {
            mm[a[i]]++;
            if (mm[a[i]] == max)
            {
                cout << a[i] << endl;
                return 0;
            }
        }
    }
}