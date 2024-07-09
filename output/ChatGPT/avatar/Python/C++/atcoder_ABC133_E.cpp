#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
int N, K;
const int mod = 1e9 + 7;

int dfs(int fro, int to, int f) {
    int caseNum = f;
    int colorNum = (f == K) ? K - 1 : K - 2;
    for(int u : graph[fro]) {
        if(u == to) {
            continue;
        }
        int pat = dfs(u, fro, colorNum);
        if(pat == 0) {
            caseNum = 0;
            break;
        }
        caseNum = (1LL * caseNum * pat) % mod;
        colorNum -= 1;
    }
    return caseNum;
}

int main() {
    cin >> N >> K;
    graph.resize(N);
    for(int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }
    int ans = dfs(0, -1, K);
    cout << ans << endl;

    return 0;
}