#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, k, a[N];
vector<int> g[N];
int dfs(int v, int p) {
    int height_from_leaf = 0;
    int cut_count = 0;
    for (int u : g[v]) {
        if (u == 0) continue;
        int hgt, cut = dfs(u, v);
        height_from_leaf = max(height_from_leaf, hgt);
        cut_count += cut;
    }
    height_from_leaf += 1;
    if (p != 0 && height_from_leaf == k) {
        height_from_leaf = 0;
        cut_count += 1;
    }
    return height_from_leaf, cut_count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        g[a[i]].push_back(i);
    }
    int ans = 0;
    int hgt, cut = dfs(0, 0);
    ans += cut;
    if (a[1] != 1) ans += 1;
    cout << ans << endl;
    return 0;
}