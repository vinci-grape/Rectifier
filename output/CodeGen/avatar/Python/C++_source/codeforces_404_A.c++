#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cassert>
using namespace std;

typedef long long ll;

const int maxn = 100;
const int maxm = 100;
const int inf = 0x3f3f3f3f;

struct edge {
    int to, next, val;
} e[maxm];
int head[maxn], tot, n, m, k;
int d[maxn], cur[maxn], s[maxn], t[maxn], p[maxn];

void add(int u, int v, int val) {
    e[tot].to = v;
    e[tot].val = val;
    e[tot].next = head[u];
    head[u] = tot++;
}

void dfs(int u, int p) {
    s[u] = ++k;
    for (int i = head[u]; i!= -1; i = e[i].next) {
        int v = e[i].to;
        if (v!= p) {
            dfs(v, u);
            s[u] = min(s[u], s[v]);
        }
    }
}

void dfs2(int u, int p) {
    t[u] = ++k;
    for (int i = head[u]; i!= -1; i = e[i].next) {
        int v = e[i].to;
        if (v!= p) {
            dfs2(v, u);
            t[u] = min(t[u], t[v]);
        }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++) {
        int u, v, val;
        scanf("%d%d%d", &u, &v, &val);
        add(u, v, val);
        add(v, u, val);
    }
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            dfs(i, 0);
            dfs2(i, 0);
        } else {
            dfs(i, p[i - 1]);
            dfs2(i, p[i - 1]);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (s[i] == t[i]) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}