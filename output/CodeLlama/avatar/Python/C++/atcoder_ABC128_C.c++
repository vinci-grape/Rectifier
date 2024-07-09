#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> li(m);
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int y;
            cin >> y;
            li[i].push_back(y);
        }
    }
    vector<int> p(m);
    for (int i = 0; i < m; i++)
        cin >> p[i];
    vector<int> q;
    for (int i = 1; i <= n; i++)
        q.push_back(i);
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (find(q.begin(), q.end(), i) == q.end())
            v.push_back(i);
    }
    int ans = 0;
    for (int i = 0; i <= q.size(); i++)
    {
        for (int j = 0; j < (1 << v.size()); j++)
        {
            int temp = j;
            vector<int> s;
            for (int k = 0; k < v.size(); k++)
            {
                if (temp & 1)
                    s.push_back(v[k]);
                temp >>= 1;
            }
            for (int k = 0; k < m; k++)
            {
                int flag = 0;
                for (int l = 0; l < li[k].size(); l++)
                {
                    if (find(s.begin(), s.end(), li[k][l]) != s.end())
                    {
                        if (p[k] == 1)
                        {
                            flag = 1;
                            break;
                        }
                    }
                    else
                    {
                        if (p[k] == 0)
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
                if (flag == 1)
                    break;
            }
            if (flag == 0)
                ans += (1 << v.size());
        }
    }
    cout << ans << endl;
    return 0;
}