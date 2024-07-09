#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), par(n), rank(n), size(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) par[i] = i, rank[i] = 1, size[i] = 1;
    for (int i = 0; i < n; i++) {
        int k = a[i] - 1;
        if (k >= 0 && a[k] > a[i]) {
            par[k] = i;
            size[i] += size[k];
        }
        if (k + 1 < n && a[k + 1] > a[i]) {
            par[k + 1] = i;
            size[i] += size[k + 1];
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++) {
        int l = 1, r = 1;
        if (i > 0 && a[i - 1] > a[i]) l += size[par[i - 1]];
        if (i + 1 < n && a[i + 1] > a[i]) r += size[par[i + 1]];
        c += l * r * a[i];
    }
    cout << c;
}