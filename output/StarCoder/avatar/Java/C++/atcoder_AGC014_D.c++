#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int m = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < g[i].size(); j++) {
            if (g[i][j] == i) continue;
            int r = 0;
            r = maxMatching(g[i][j], i);
            cnt += r / 2;
            m = max(m, cnt);
        }
    }
    cout << (2 * m == n? "Second" : "First") << "\n";
    return 0;
}