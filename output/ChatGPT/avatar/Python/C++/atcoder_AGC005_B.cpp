#include <iostream>
#include <vector>

using namespace std;

int root(vector<int>& par, int x) {
    return par[x] == x ? x : root(par, par[x]);
}

bool same(vector<int>& par, int x, int y) {
    return root(par, x) == root(par, y);
}

void unite(vector<int>& par, vector<int>& rank, vector<int>& size, int x, int y) {
    x = root(par, x);
    y = root(par, y);
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> par(n);
    for (int i = 0; i < n; i++) {
        par[i] = i;
    }
    vector<int> rank(n, 1);
    vector<int> size(n, 1);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        b[a[i] - 1] = i;
    }
    int c = 0;
    for (int i = n - 1; i >= 0; i--) {
        int k = b[i];
        int l = 1;
        int r = 1;
        if (k > 0 && a[k - 1] > a[k]) {
            l += size[root(par, k - 1)];
            unite(par, rank, size, k - 1, k);
        }
        if (k + 1 < n && a[k + 1] > a[k]) {
            r += size[root(par, k + 1)];
            unite(par, rank, size, k + 1, k);
        }
        c += l * r * a[k];
    }
    cout << c << endl;


    return 0;
}