#include <bits/stdc++.h>
using namespace std;

class codeforces_216_B {
public:
    int count;
    bool seen[100001];
    int path, cycle;
    vector < vector <int> > graph;
    int dfs(int child, int par) {
        if (seen[child]) return cycle;
        seen[child] = true;
        for (int i : graph[child]) {
            if (i!= par) {
                count++;
                if (dfs(i, child) == cycle) return cycle;
            }
        }
        return path;
    }
    void solve() {
        int m, n;
        cin >> m >> n;
        codeforces_216_B ft;
        ft.graph = vector < vector <int> > (m + 1);
        for (int i = 0; i <= m; i++) ft.graph[i].clear();
        ft.seen = vector < bool > (m + 1, false);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            ft.graph[x].push_back(y);
            ft.graph[y].push_back(x);
        }
        int toremove = 0;
        for (int i = 1; i <= m; i++) {
            if (!ft.seen[i]) {
                ft.count = 0;
                if (ft.dfs(i, 0) == ft.cycle) {
                    if (ft.count % 2 == 1) toremove++;
                }
            }
        }
        if ((m - toremove) % 2 == 1) toremove++;
        cout << toremove << endl;
    }
};

int main() {
    codeforces_216_B ft;
    ft.solve();
    return 0;
}