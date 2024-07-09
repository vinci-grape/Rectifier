#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n - 1; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i <= n; i++)
#define FORR(i, m, n) for (int i = m; i >= n; i--)
#define SORT(v, n) sort(v, v + n)
#define MAX 100000
#define inf 1000000007
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using P = pair<ll, ll>;
using p = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
    // cin高速化
    cin.tie(0);
    ios::sync_with_stdio(false);
    int H, W;
    cin >> H >> W;
    int si, sj, ti, tj;
    cin >> si >> sj >> ti >> tj;
    --si;
    --sj;
    --ti;
    --tj;
    vector<vector<int>> S(H, vector<int>(W));
    REP(i, H) REP(j, W) cin >> S[i][j];
    vector<vector<int>> D(H, vector<int>(W, -1));
    queue<p> que;
    que.push(p(0, si, sj));
    while (!que.empty()) {
        int c = que.front().first;
        int i = que.front().second;
        int j = que.front().third;
        que.pop();
        if (D[i][j] != -1) continue;
        D[i][j] = c;
        for (int di = -2; di <= 2; di++) {
            for (int dj = -2; dj <= 2; dj++) {
                int ni = i + di;
                int nj = j + dj;
                if (ni < 0 || ni >= H || nj < 0 || nj >= W || D[ni][nj] != -1 || ni == nj == 0 || S[ni][nj] == 1) continue;
                if ((di == 0 && abs(dj) == 1) || (dj == 0 && abs(di) == 1)) {
                    que.push(p(c, ni, nj));
                } else {
                    que.push(p(c + 1, ni, nj));
                }
            }
        }
    }
    cout << D[ti][tj] << endl;
    // cout << D << endl;
}