#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> readInts() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    return nums;
}

pair<int, int> dfs(vector<unordered_set<int>>& g, unordered_set<int>& seen, int i) {
    if (seen.count(i) > 0) {
        return make_pair(0, 0);
    }
    seen.insert(i);
    int nodes = 1;
    int edges = g[i].size();
    for (int j : g[i]) {
        pair<int, int> result = dfs(g, seen, j);
        nodes += result.first;
        edges += result.second;
    }
    return make_pair(nodes, edges);
}

bool solve() {
    vector<int> line0;
    line0 = readInts();
    if (line0.empty()) {
        return false;
    }
    int n = line0[0];
    int m = line0[1];
    vector<unordered_set<int>> g(n + 1);
    unordered_set<int> seen;
    for (int i = 1; i <= n; i++) {
        g[i] = unordered_set<int>();
    }
    for (int i = 0; i < m; i++) {
        vector<int> nums = readInts();
        int a = nums[0];
        int b = nums[1];
        g[a].insert(b);
        g[b].insert(a);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (seen.count(i) == 0) {
            pair<int, int> result = dfs(g, seen, i);
            int nodes = result.first;
            int edges = result.second;
            if (nodes > 1 && nodes % 2 == 1 && 2 * nodes == edges) {
                ans++;
            }
        }
    }
    if ((n - ans) % 2 == 1) {
        ans++;
    }
    cout << ans << endl;
    return true;
}

int main() {
    while (solve()) {}
    return 0;
}