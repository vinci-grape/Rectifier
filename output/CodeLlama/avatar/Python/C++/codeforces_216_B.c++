#include <bits/stdc++.h>
using namespace std;

vector<int> readInts() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<int> ints;
    int x;
    while (ss >> x) {
        ints.push_back(x);
    }
    return ints;
}

vector<int> g[100001];
bool seen[100001];

int dfs(int i) {
    if (seen[i]) {
        return 0;
    }
    seen[i] = true;
    int nodes = 1;
    int edges = g[i].size();
    for (int j : g[i]) {
        int x = dfs(j);
        nodes += x;
        edges += x;
    }
    return nodes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> line0 = readInts();
    int n = line0[0];
    int m = line0[1];
    for (int i = 1; i <= n; i++) {
        g[i].clear();
    }
    for (int i = 0; i < m; i++) {
        vector<int> line = readInts();
        int a = line[0];
        int b = line[1];
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!seen[i]) {
            int nodes = dfs(i);
            if (nodes > 1 && nodes % 2 == 1 && 2 * nodes == g[i].size()) {
                ans++;
            }
        }
    }
    if ((n - ans) % 2 == 1) {
        ans++;
    }
    cout << ans << endl;
    return 0;
}