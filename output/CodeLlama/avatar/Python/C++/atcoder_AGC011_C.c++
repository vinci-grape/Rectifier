#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> vis(n + 1, 0);
    vector<vector<int>> g(n + 1);
    int ci = 0, cb = 0, cc = 0;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            if (g[i].size() == 0)
            {
                ci++;
            }
            else
            {
                if (dfs(i))
                {
                    cb++;
                }
                else
                {
                    cc++;
                }
            }
        }
    }
    cout << ci * ci + 2 * ci * (n - ci) + cc * cc + 2 * cb * cc + 2 * cb * cb;
    return 0;
}