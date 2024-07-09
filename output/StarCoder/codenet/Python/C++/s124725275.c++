#include <bits/stdc++.h>
using namespace std;

int H, W, si, sj, ti, tj;
int main() {
    cin >> H >> W >> si >> sj >> ti >> tj;
    vector<vector<int>> S(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }
    vector<vector<int>> D(H, vector<int>(W, -1));
    queue<pair<int, int>> que;
    que.push(make_pair(0, si));
    que.push(make_pair(0, sj));
    while (!que.empty()) {
        int c, i, j;
        tie(c, i) = que.front();
        que.pop();
        if (D[i][j]!= -1) continue;
        D[i][j] = c;
        for (int di = -2; di <= 2; di++) {
            for (int dj = -2; dj <= 2; dj++) {
                int ni = i + di, nj = j + dj;
                if (0 <= ni && ni < H && 0 <= nj && nj < W && D[ni][nj] == -1 && ni!= nj) {
                    if (di == 0 && abs(dj) == 1) {
                        que.push(make_pair(c, ni));
                    } else {
                        que.push(make_pair(c + 1, ni));
                    }
                }
            }
        }
    }
    cout << D[ti][tj] << endl;
}