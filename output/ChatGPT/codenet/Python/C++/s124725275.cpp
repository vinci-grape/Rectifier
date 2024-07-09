#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int H, W;
int si, sj, ti, tj;
vector<vector<int>> S;
vector<vector<int>> D;
deque<pair<int, int>> que;

void grid_dijkstra() {
    int di, dj, ni, nj;
    int c, i, j;
    while (!que.empty()) {
        c = que.front().first;
        i = que.front().second / W;
        j = que.front().second % W;
        que.pop_front();
        if (D[i][j] != -1) {
            continue;
        }
        D[i][j] = c;
        for (di = -2; di <= 2; di++) {
            for (dj = -2; dj <= 2; dj++) {
                ni = i + di;
                nj = j + dj;
                if (ni < 0 || ni >= H || nj < 0 || nj >= W || D[ni][nj] != -1 || (ni == 0 && nj == 0) || S[ni][nj] == 1) {
                    continue;
                }
                if ((di == 0 && abs(dj) == 1) || (dj == 0 && abs(di) == 1)) {
                    que.push_front(make_pair(c, ni * W + nj));
                } else {
                    que.push_back(make_pair(c + 1, ni * W + nj));
                }
            }
        }
    }
}

int main() {
    cin >> H >> W;
    cin >> si >> sj;
    cin >> ti >> tj;
    si--; sj--; ti--; tj--;
    S.resize(H, vector<int>(W));
    D.resize(H, vector<int>(W, -1));
    que.push_back(make_pair(0, si * W + sj));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }
    grid_dijkstra();
    cout << D[ti][tj] << endl;
    return 0;
}