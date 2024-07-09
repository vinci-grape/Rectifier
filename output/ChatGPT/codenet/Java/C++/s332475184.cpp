#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iomanip>
#include <bitset>
#include <numeric>
#include <cassert>
#include <random>
#include <fstream>
#include <functional>
#include <tuple>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <iterator>
#include <deque>

using namespace std;

int counter[100005];
vector<vector<int>> graph;

void dfs(int v, int par, long long val) {
    for (int i : graph[v]) {
        if (i != par) {
            dfs(i, v, val + counter[v]);
        }
    }
    counter[v] += val;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    graph.resize(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        counter[x - 1] += y;
    }
    dfs(0, -1, 0);
    for (int i = 0; i < n; i++) {
        cout << counter[i] << " ";
    }
    cout << endl;
    return 0;
}