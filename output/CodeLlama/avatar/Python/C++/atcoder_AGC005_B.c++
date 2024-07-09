#include <bits/stdc++.h>
using namespace std;
int root(int x) {
    return x == par[x] ? x : root(par[x]);
}
bool same(int x, int y) {
    return root(x) == root(y);
}
void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x != y) {
        if (rank[x] < rank[y]) {
            par[x] = y;
            size[y] += size[x];
        } else {
            par[y] = x;
            size[x] += size[y];
            if (rank[x] == rank[y]) rank[x]++;
        }
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> par(n), rank(n), size(n);
    iota(par.begin(), par.end(), 0);
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(n);
    iota(b.begin(), b.end(), 0);
    sort(b.begin(), b.end(), [&](int i, int j) { return a[i] < a[j]; });
    long long c = 0;
    for (int k = 0; k < n; k++) {
        int l = 1, r = 1;
        if (k > 0 && a[k - 1] > a[k]) {
            l += size[root(k - 1)];
            unite(k - 1, k);
        }
        if (k + 1 < n && a[k + 1] > a[k]) {
            r += size[root(k + 1)];
            unite(k + 1, k);
        }
        c += 1LL * l * r * a[k];
    }
    cout << c << endl;
    return 0;
}