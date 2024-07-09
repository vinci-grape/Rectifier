#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> g;
int ans[100001];

void dfs(int to, int color, int parents) {
    int k = 1;
    for (int i = 0; i < g[to].size(); i++) {
        int to = g[to][i];
        if (to == parents) continue;
        if (k == color) k++;
        ans[g[to][i]] = k;
        dfs(to, k, to);
        k++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    g.resize(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(0, -1, -1);
    int max = 0;
    for (int temp : ans) {
        max = max > temp? max : temp;
    }
    cout << max << "\n";
    for (int c : ans) {
        cout << c << "\n";
    }
    return 0;
}