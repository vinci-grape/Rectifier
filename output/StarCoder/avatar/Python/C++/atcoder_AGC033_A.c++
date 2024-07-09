#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> graph(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            char c;
            cin >> c;
            if (c == '#')
                graph[i][j] = 0;
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (graph[i][j] == 0)
                continue;
            if (j + 1 < w && graph[i][j + 1] == 0)
                graph[i][j + 1] = graph[i][j] + 1;
            if (j - 1 >= 0 && graph[i][j - 1] == 0)
                graph[i][j - 1] = graph[i][j] + 1;
            if (i + 1 < h && graph[i + 1][j] == 0)
                graph[i + 1][j] = graph[i][j] + 1;
            if (i - 1 >= 0 && graph[i - 1][j] == 0)
                graph[i - 1][j] = graph[i][j] + 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            ans = max(ans, graph[i][j]);
        }
    }
    cout << ans;
    return 0;
}