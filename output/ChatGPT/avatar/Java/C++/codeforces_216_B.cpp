#include <iostream>
#include <vector>
using namespace std;

class Codeforces_216_B {
    int count;
    vector<bool> seen;
    int path = 0, cycle = 1;
    vector<vector<int>> graph;

public:
    int dfs(int child, int par) {
        if (seen[child] == true)
            return cycle;
        seen[child] = true;
        for (int i : graph[child]) {
            if (i != par) {
                this->count++;
                if (dfs(i, child) == cycle)
                    return cycle;
            }
        }
        return path;
    }
};

int main() {
    int m, n;
    cin >> m >> n;
    Codeforces_216_B ft;
    ft.graph.resize(m + 1);
    ft.seen.resize(m + 1);
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
                if (ft.count % 2 == 1)
                    toremove++;
            }
        }
    }
    if ((m - toremove) % 2 == 1)
        toremove++;
    cout << toremove << endl;
}