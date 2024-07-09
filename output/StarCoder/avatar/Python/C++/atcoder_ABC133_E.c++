#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
int N, K;
vector <int> graph[100005];
int dfs(int fro, int to, int f) {
    int caseNum = f;
    int colorNum = K - 1;
    if (f == K) colorNum--;
    for (int u : graph[fro]) {
        if (u == to) continue;
        int pat = dfs(u, fro, colorNum);
        if (pat == 0) {
            caseNum = 0;
            break;
        }
        caseNum = (caseNum * pat) % MOD;
        colorNum--;
    }
    return caseNum;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }
    int ans = dfs(0, -1, K);
    cout << ans << "\n";
    return 0;
}