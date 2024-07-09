#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX = 100005;
int n, m;
vector<int> G[MAX];
int col[MAX];
int cnt;

void dfs(int u) {
    col[u] = cnt;
    for (int v : G[u]) {
        if (col[v] < 0) {
            dfs(v);
        }
    }
    cnt++;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        if (col[i] < 0) {
            dfs(i);
        }
    }
    int max = 0;
    for (int i = 1; i <= n; i++) {
        if (col[i] > max) {
            max = col[i];
        }
    }
    cout << max << endl;
    return 0;
}