#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

const int maxn = 1005;
int n, m;
int deg[maxn];
int par[maxn];
int vis[maxn];
int edge[maxn][maxn];
int ans;

void dfs(int u) {
    vis[u] = 1;
    for (int i = 0; i < deg[u]; ++i) {
        if (!vis[edge[u][i]]) {
            dfs(edge[u][i]);
        }
    }
}

void dfs2(int u) {
    vis[u] = 1;
    for (int i = 0; i < deg[u]; ++i) {
        if (!vis[edge[u][i]]) {
            dfs2(edge[u][i]);
        }
    }
    ans++;
}

int main() {
    while (scanf("%d%d", &n, &m)!= EOF) {
        for (int i = 0; i < n; ++i) {
            deg[i] = 0;
            par[i] = 0;
        }
        for (int i = 0; i < m; ++i) {
            int u, v;
            scanf("%d%d", &u, &v);
            edge[u][deg[u]++] = v;
            edge[v][deg[v]++] = u;
        }
        for (int i = 0; i < n; ++i) {
            if (deg[i] % 2 == 1) {
                ans = -1;
                break;
            }
        }
        if (ans == -1) {
            continue;
        }
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; ++i) {
            if (!vis[i]) {
                dfs(i);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (!vis[i]) {
                dfs2(i);
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}