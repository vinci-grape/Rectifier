#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> g;
int ans[100000];
void dfs(int to, int color, int parents) {
    int k = 1;
    for (int e : g[to]) {
        if (e == parents) continue;
        if (k == color) k++;
        ans[e] = k;
        dfs(e, k, to);
        k++;
    }
}
int main() {
    cin >> n;
    g.resize(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(i);
        g[b - 1].push_back(i);
    }
    dfs(0, -1, -1);
    int max = 0;
    for (int temp : ans) {
        max = max(max, temp);
    }
    cout << max << endl;
    for (int c : ans) {
        cout << c << endl;
    }
    return 0;
}