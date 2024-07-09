#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> par(n), rank(n);
    for (int i = 0; i < n; i++) {
        par[i] = i;
        rank[i] = 0;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        x--;
        y--;
        if (x == y) continue;
        if (rank[x] < rank[y]) {
            par[x] = y;
        } else if (rank[x] > rank[y]) {
            par[y] = x;
        } else {
            par[x] = y;
            rank[x]++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (par[i] == i) {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}