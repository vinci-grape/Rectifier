#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<set<int>> edges;
vector<int> degs, parity, flag;
int main() {
    cin >> N >> M;
    edges.resize(N);
    degs.resize(N);
    parity.resize(N);
    flag.resize(N);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        edges[a - 1].insert(b - 1);
        edges[b - 1].insert(a - 1);
        degs[a - 1]++;
        degs[b - 1]++;
    }
    if (M % 2!= 0) {
        cout << -1 << endl;
        return 0;
    }
    priority_queue<pair<int, int>> Q;
    for (int i = 0; i < N; i++) {
        Q.push({degs[i], i});
    }
    while (!Q.empty()) {
        int u = Q.top().second;
        Q.pop();
        if (flag[u]) continue;
        flag[u] = true;
        for (int i = 0; i < edges[u].size(); i++) {
            int v = *edges[u].begin();
            edges[u].erase(v);
            if (parity[u]!= 0 && i == 0) {
                cout << u + 1 << " " << v + 1 << endl;
                parity[u] = 1 - parity[u];
            } else {
                cout << v + 1 << " " << u + 1 << endl;
                parity[v] = 1 - parity[v];
            }
            degs[v]--;
            Q.push({degs[v], v});
        }
    }
}