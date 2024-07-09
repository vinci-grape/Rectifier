#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> orig;
    for (int i = 1; i <= n; i++)
    {
        vector<int> v;
        for (int j = 1; j <= n; j++)
        {
            v.push_back(j);
        }
        orig.push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (orig[i][j] > orig[i][j + 1])
            {
                swap(orig[i][j], orig[i][j + 1]);
            }
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
    for (int i = 0; i < n; i++)
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
}