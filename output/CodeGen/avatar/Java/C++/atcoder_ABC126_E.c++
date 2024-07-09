#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAXN = 100005;

int n, m;
int par[MAXN], rank[MAXN];
int ans;

void dfs(int u) {
    if (u == par[u]) return;
    par[u] = par[par[u]];
    dfs(par[u]);
}

void init(int n) {
    for (int i = 0; i < n; ++i) {
        par[i] = i;
        rank[i] = 0;
    }
}

void unite(int x, int y) {
    x = par[x];
    y = par[y];
    if (x == y) return;
    if (rank[x] < rank[y]) swap(x, y);
    par[x] = y;
    if (rank[x] == rank[y]) ++rank[y];
}

int main() {
    scanf("%d%d", &n, &m);
    init(n);
    for (int i = 0; i < m; ++i) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        x--; y--;
        unite(x, y);
        unite(x, z);
        unite(y, z);
    }
    dfs(0);
    ans = 0;
    for (int i = 0; i < n; ++i) {
        if (par[i] == i) ++ans;
    }
    printf("%d\n", ans);
    return 0;
}