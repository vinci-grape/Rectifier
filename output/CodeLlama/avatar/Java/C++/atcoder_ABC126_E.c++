#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
void doIt() {
    int n;
    cin >> n;
    UnionFindTree utf(n);
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        utf.unite(x - 1, y - 1);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (utf.par[i] == i) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
class UnionFindTree {
    int n;
    vector<int> par;
    vector<int> rank;

public:
    UnionFindTree(int n) : n(n), par(n), rank(n) {
        for (int i = 0; i < n; i++) {
            par[i] = i;
            rank[i] = 0;
        }
    }
    int find(int x) {
        if (par[x] == x) {
            return x;
        } else {
            return par[x] = find(par[x]);
        }
    }
    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) return;
        if (rank[x] < rank[y]) par[x] = y;
        else {
            par[y] = x;
            if (rank[x] == rank[y]) rank[x]++;
        }
    }
    bool same(int x, int y) { return find(x) == find(y); }
};
int main() {
    doIt();
}