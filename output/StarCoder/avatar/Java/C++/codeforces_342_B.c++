#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, s, f, maxT;
    map<int, vector<int>> map;
    cin >> m >> s >> f;
    maxT = -1;
    while (m > 0)
    {
        int k;
        cin >> k;
        map[k].push_back(k);
        map[k].push_back(k);
        maxT = max(maxT, k);
        m--;
    }
    string actions;
    char M = (s < f)? 'R' : 'L';
    int d = (s < f)? +1 : -1;
    int cur = s;
    int a = -1, b = -1;
    for (int t = 1; t <= maxT; t++)
    {
        if (map.find(t)!= map.end())
        {
            a = map[t][0];
            b = map[t][1];
        }
        if (map.find(t)!= map.end() && ((cur >= a && cur <= b) || (cur + d >= a && cur + d <= b)))
        {
            actions.append('X');
        }
        else
        {
            actions.append(M);
            cur += d;
        }
        if (cur == f)
            break;
    }
    while (cur!= f)
    {
        actions.append(M);
        cur += d;
    }
    cout << actions << endl;
    return 0;
}