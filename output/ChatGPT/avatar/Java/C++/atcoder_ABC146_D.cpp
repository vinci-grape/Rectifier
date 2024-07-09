#include <iostream>
#include <vector>

using namespace std;

struct Edge {
    int id;
    int to;

    Edge(int id, int to) {
        this->id = id;
        this->to = to;
    }
};

int n;
vector<vector<Edge>> g;
vector<int> ans;

void dfs(int to, int color, int parent) {
    int k = 1;
    for (Edge e : g[to]) {
        if (e.to == parent) continue;
        if (k == color) k++;
        ans[e.id] = k;
        dfs(e.to, k, to);
        k++;
    }
}

int main() {
    cin >> n;
    g.resize(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(Edge(i, b));
        g[b].push_back(Edge(i, a));
    }
    ans.resize(n - 1);
    dfs(0, -1, -1);

    int maxColor = 0;
    for (int temp : ans) {
        maxColor = max(maxColor, temp);
    }

    cout << maxColor << endl;
    for (int c : ans) {
        cout << c << endl;
    }

    return 0;
}