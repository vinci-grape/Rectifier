#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

const int maxn = 1005;
const int maxm = 1005;

int n, m;
int g[maxn][maxn];
int seen[maxn];
int ans;

void dfs(int u) {
    if (seen[u]) return;
    seen[u] = 1;
    int cnt = 0;
    for (int v = 0; v < n; ++v) {
        if (g[u][v]) {
            dfs(v);
            ++cnt;
        }
    }
    if (cnt % 2 == 1) ++ans;
}

int main() {
    while (~scanf("%d%d", &n, &m)) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                scanf("%d", &g[i][j]);
            }
        }
        memset(seen, 0, sizeof(seen));
        ans = 0;
        for (int i = 0; i < n; ++i) {
            if (!seen[i]) dfs(i);
        }
        printf("%d\n", ans);
    }
    return 0;
}