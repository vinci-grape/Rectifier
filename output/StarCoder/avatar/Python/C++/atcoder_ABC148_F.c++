#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int n, ta, ao;
    cin >> n >> ta >> ao;
    ta--;
    ao--;
    vector < vector < int > > g(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }
    vector < int > ta_dist(n, -1), ao_dist(n, -1);
    ta_dist[ta] = 0;
    ao_dist[ao] = 0;
    function < void(int) > ta_dfs = [&](int node) {
        for (int v : g[node]) {
            if (ta_dist[v]!= -1) continue;
            ta_dist[v] = ta_dist[node] + 1;
            ta_dfs(v);
        }
    };
    function < void(int) > ao_dfs = [&](int node) {
        for (int v : g[node]) {
            if (ao_dist[v]!= -1) continue;
            ao_dist[v] = ao_dist[node] + 1;
            ao_dfs(v);
        }
    };
    ao_dfs(ao);
    ta_dfs(ta);
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (ta_dist[i] > ao_dist[i]) continue;
        res = max(res, ao_dist[i]);
    }
    cout << res - 1;
    return 0;
}