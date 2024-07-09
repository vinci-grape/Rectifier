#include <iostream>
#include <vector>
using namespace std;

void dfs(int u, vector<int>& d, vector<vector<int>>& edges) {
    for (int nu : edges[u]) {
        if (d[nu] == INT_MAX) {
            d[nu] = d[u] + 1;
            dfs(nu, d, edges);
        }
    }
}

int main() {
    int N, u, v;
    cin >> N >> u >> v;
    u--;
    v--;

    vector<vector<int>> edges(N);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    vector<int> d(N, INT_MAX);
    d[u] = 0;
    dfs(u, d, edges);

    vector<int> e(N, INT_MAX);
    e[v] = 0;
    dfs(v, e, edges);

    int q = -1;
    for (int i = 0; i < N; i++) {
        if (d[i] < e[i]) {
            if (e[i] > q) {
                q = e[i];
            }
        }
    }

    if (q <= 0) {
        cout << 0 << endl;
    } else {
        cout << q - 1 << endl;
    }

    return 0;
}