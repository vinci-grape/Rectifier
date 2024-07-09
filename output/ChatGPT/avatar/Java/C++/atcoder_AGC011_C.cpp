#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> graph[100001];
bool visited[100001];
int color[100001];
long long one;
long long bipartite;
long long count;
bool mujun;

int dfs(int a, int c) {
    if (visited[a]) {
        if (color[a] >= 0 && color[a] != c) mujun = true;
        return 0;
    }
    visited[a] = true;
    color[a] = c;
    int total = 1;
    for (int b : graph[a]) {
        total += dfs(b, 1 - c);
    }
    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        graph[i].clear();
    }

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1);
    }

    memset(visited, false, sizeof(visited));
    memset(color, -1, sizeof(color));
    one = 0;
    bipartite = 0;
    count = 0;

    for (int i = 0; i < n; ++i) {
        if (visited[i]) continue;
        count++;
        mujun = false;
        int kind = dfs(i, 0);
        if (kind == 1)
            one++;
        else if (!mujun)
            bipartite++;
    }

    long long total = one * (2 * n - one);
    total += (count - one) * (count - one);
    total += bipartite * bipartite;

    cout << total << endl;

    return 0;
}