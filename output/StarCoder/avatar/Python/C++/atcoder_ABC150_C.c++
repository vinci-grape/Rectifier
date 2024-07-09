#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> orig;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            orig.push_back({i, j});
        }
    }
    vector<int> p, q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push_back(x);
    }
    int pn = 0, qn = 0;
    for (int i = 0; i < orig.size(); i++)
    {
        if (orig[i] == p)
        {
            pn = i;
        }
        if (orig[i] == q)
        {
            qn = i;
        }
    }
    cout << abs(pn - qn);
    return 0;
}