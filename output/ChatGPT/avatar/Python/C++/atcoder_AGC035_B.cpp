#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<set<int>> edges(N);
    vector<int> degs(N, 0);
    vector<int> parity(N, 0);
    vector<bool> flag(N, false);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        edges[a - 1].insert(b - 1);
        edges[b - 1].insert(a - 1);
        degs[a - 1]++;
        degs[b - 1]++;
    }

    if (M % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

    for (int i = 0; i < N; i++) {
        Q.push({degs[i], i});
    }

    while (!Q.empty()) {
        int d = Q.top().first;
        int u = Q.top().second;
        Q.pop();

        if (flag[u]) {
            continue;
        }

        flag[u] = true;

        for (auto v : edges[u]) {
            edges[v].erase(u);

            if (parity[u] != 0 && v == *edges[u].begin()) {
                cout << u + 1 << " " << v + 1 << endl;
                parity[u] = 1 - parity[u];
            } else {
                cout << v + 1 << " " << u + 1 << endl;
                parity[v] = 1 - parity[v];
            }

            degs[v]--;
            Q.push({degs[v], v});
        }
    }


    return 0;
}