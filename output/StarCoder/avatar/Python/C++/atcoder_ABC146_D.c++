#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> adj(n, vector<int>());
    map<pair<int, int>, int> edge;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a - 1].push_back(b - 1);
        adj[b - 1].push_back(a - 1);
        edge[(min(a, b), max(a, b))] = 0;
    }
    int k = 0;
    queue<int> q;
    vector<int> visited(n, 0);
    q.push(0);
    visited[0] = 1;
    while (!q.empty()) {
        int qh = q.front();
        q.pop();
        int color = 0;
        for (int nex : adj[qh]) {
            if (visited[nex]) continue;
            visited[nex] = 1;
            color++;
            if (color == edge[(min(qh, nex), max(qh, nex))]) color++;
            edge[(min(qh, nex), max(qh, nex))] = color;
            q.push(nex);
        }
        k = max(k, color);
    }
    cout << k << "\n";
    for (auto it : edge) {
        cout << it.second << " ";
    }
    return 0;
}