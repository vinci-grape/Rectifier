#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;
class codeforces_216_B {
public:
    int count;
    bool *seen;
    int path = 0, cycle = 1;
    vector<list<int>> graph;
    int dfs(int child, int par) {
        if (seen[child] == true) return cycle;
        seen[child] = true;
        for (auto i : graph[child]) {
            if (i != par) {
                this->count++;
                if (dfs(i, child) == cycle) return cycle;
            }
        }
        return path;
    }
    void solve() {
        int m, n;
        cin >> m >> n;
        graph.resize(m + 1);
        seen = new bool[m + 1];
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        int toremove = 0;
        for (int i = 1; i <= m; i++) {
            if (!seen[i]) {
                count = 0;
                if (dfs(i, 0) == cycle) {
                    if (count % 2 == 1) toremove++;
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