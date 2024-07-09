#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstdlib>
using namespace std;
int vis[1005];
int g[1005][1005];
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        g[u][v] = 1;
        g[v][u] = 1;
    }
    for(int i = 0; i < n; i++) {
        if(vis[i] == 0) {
            if(g[i][0] == 0) {
                cout << "0" << endl;
                return 0;
            }
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()) {
                int u = q.front();
                q.pop();
                for(int v = 0; v < n; v++) {
                    if(g[u][v] == 1 && vis[v] == 0) {
                        vis[v] = 1;
                        q.push(v);
                    }
                }
            }
            if(vis[0] == 0) {
                cout << "0" << endl;
                return 0;
            }
        }
    }
    int ci = 0, cb = 0, cc = 0;
    for(int i = 0; i < n; i++) {
        if(vis[i] == 0) {
            if(g[i][0] == 0) {
                ci++;
            } else {
                if(dfs(i)) {
                    cb++;
                } else {
                    cc++;
                }
            }
        }
    }
    cout << ci * ci + 2 * ci * (n - ci) + cc * cc + 2 * cb * cc + 2 * cb * cb << endl;
    return 0;
}