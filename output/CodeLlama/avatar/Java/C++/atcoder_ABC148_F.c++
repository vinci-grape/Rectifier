#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int u, v;
    cin >> u >> v;
    vector<vector<int>> edges(N);
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        edges[a - 1].push_back(b - 1);
        edges[b - 1].push_back(a - 1);
    }
    vector<int> d(N);
    for (int i = 0; i < N; i++)
    {
        d[i] = INT_MAX;
    }
    d[u - 1] = 0;
    dfs(u - 1, d, edges);
    vector<int> e(N);
    for (int i = 0; i < N; i++)
    {
        e[i] = INT_MAX;
    }
    e[v - 1] = 0;
    dfs(v - 1, e, edges);
    int q = -1;
    for (int i = 0; i < N; i++)
    {
        if (d[i] < e[i])
        {
            if (e[i] > q)
            {
                q = e[i];
            }
        }
    }
    if (q <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << q - 1 << endl;
    }
    return 0;
}
void dfs(int u, vector<int> &d, vector<vector<int>> &edges)
{
    for (int i = 0; i < edges[u].size(); i++)
    {
        if (d[edges[u][i]] == INT_MAX)
        {
            d[edges[u][i]] = d[u] + 1;
            dfs(edges[u][i], d, edges);
        }
    }
}