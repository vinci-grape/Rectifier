#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ara[n];
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        ara[i] = v;
        if (!map.count(v))
        {
            map[v] = 1;
        }
        else
        {
            map[v] = map[v] + 1;
        }
    }
    int max = 0;
    for (auto i : map)
    {
        max = max(max, i.second);
    }
    map<int, int> mm;
    for (int i = 0; i < n; i++)
    {
        if (!mm.count(ara[i]))
        {
            mm[ara[i]] = 1;
            if (mm[ara[i]] == max)
            {
                cout << ara[i] << endl;
                break;
            }
        }
        else
        {
            mm[ara[i]] = mm[ara[i]] + 1;
            if (mm[ara[i]] == max)
            {
                cout << ara[i] << endl;
                break;
            }
        }
    }
    return 0;
}