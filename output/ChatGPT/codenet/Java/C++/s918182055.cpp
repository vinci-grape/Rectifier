#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> list(100001);

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        list[a].push_back(b);
    }

    int res = 0;
    priority_queue<int> pqueue;
    for (int i = 1; i <= M; i++) {
        if (!list[i].empty()) {
            for (int j = 0; j < list[i].size(); j++) {
                pqueue.push(list[i][j]);
            }
        }
        if (!pqueue.empty()) {
            res += pqueue.top();
            pqueue.pop();
        }
    }

    cout << res << endl;

    return 0;
}