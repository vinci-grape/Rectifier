#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class codeforces_216_B {
public:
    int count;
    vector<vector<int> > graph;
    bool seen[101];
    int path;
    int cycle;
    void dfs(int child, int par) {
        if (seen[child]) return cycle;
        seen[child] = true;
        for (int i = 0; i < graph[child].size(); i++) {
            if (graph[child][i]!= par) {
                count++;
                if (dfs(graph[child][i], child) == cycle) return cycle;
            }
        }
        return path;
    }
    void input() {
        int m, n;
        cin >> m >> n;
        graph.resize(m + 1);
        for (int i = 0; i <= m; i++) {
            graph[i].resize(n + 1);
        }
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            graph[x][y] = graph[y][x] = 1;
        }
    }
    void output() {
        if (m - cycle < 2) {
            cout << "0\n";
            return;
        }
        int toremove = 0;
        for (int i = 1; i <= m; i++) {
            if (!seen[i]) {
                if (dfs(i, 0) == cycle) toremove++;
            }
        }
        cout << toremove << endl;
    }
};

int main() {
    int n;
    cin >> n;
    codeforces_216_B ft;
    ft.input();
    ft.output();
    return 0;
}