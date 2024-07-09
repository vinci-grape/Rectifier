#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e18;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> edge(N);
    for (int i = 0; i < M; i++) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        X--; Y--;
        edge[X].push_back(Y);
        edge[Y].push_back(X);
    }
    vector<bool> used(N, false);
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (!used[i]) {
            ans++;
            queue<int> q;
            q.push(i);
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                used[node] = true;
                for (int nextnode : edge[node]) {
                    if (!used[nextnode]) {
                        q.push(nextnode);
                    }
                }
            }
        }
    }
    cout << ans << endl;
}