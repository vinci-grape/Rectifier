#include <bits/stdc++.h>
using namespace std;
int n, m, vis[100001], ci, cb, cc;
vector<int> g[100001];
void dfs(int x) {
    queue<int> stk;
    stk.push(x);
    while(!stk.empty()) {
        int u = stk.front();
        stk.pop();
        if(vis[u]) continue;
        vis[u] = 1;
        if(g[u].size() == 0) ci++;
        else {
            if(dfs(g[u][0])) cb++;
            else cc++;
        }
        for(int i = 1; i < g[u].size(); i++) {
            stk.push(g[u][i]);
        }
    }
}
int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            if(g[i].size() == 0) ci++;
            else {
                if(dfs(i)) cb++;
                else cc++;
            }
        }
    }
    cout << ci * ci + 2 * ci * (n - ci) + cc * cc + 2 * cb * cc + 2 * cb * cb;
    return 0;
}