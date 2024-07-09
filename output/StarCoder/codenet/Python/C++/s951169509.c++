#include <iostream>
#include <queue>
using namespace std;
int H, W;
char G[101][101];
int main() {
    cin >> H >> W;
    for (int i = 0; i <= H+1; i++) {
        for (int j = 0; j <= W+1; j++) {
            if (i == 0 || i == H+1) {
                G[i][j] = '#';
            } else if (j == 0 || j == W+1) {
                G[i][j] = '#';
            } else {
                cin >> G[i][j];
            }
        }
    }
    int ans = 0;
    for (int sx = 0; sx <= W+1; sx++) {
        for (int sy = 0; sy <= H+1; sy++) {
            if (G[sy][sx] == '.') {
                int dist[101][101] = {0, };
                bool visited[101][101] = {false, };
                queue<pair<int, int>> q;
                q.push(make_pair(sx, sy));
                dist[sy][sx] = 0;
                visited[sy][sx] = true;
                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    if (G[y][x+1] == '.' &&!visited[y][x+1]) {
                        q.push(make_pair(x+1, y));
                        dist[y][x+1] = dist[y][x] + 1;
                        visited[y][x+1] = true;
                    }

                    if (G[y][x-1] == '.' &&!visited[y][x-1]) {
                        q.push(make_pair(x-1, y));
                        dist[y][x-1] = dist[y][x] + 1;
                        visited[y][x-1] = true;
                    }

                    if (G[y+1][x] == '.' &&!visited[y+1][x]) {
                        q.push(make_pair(x, y+1));
                        dist[y+1][x] = dist[y][x] + 1;
                        visited[y+1][x] = true;
                    }

                    if (G[y-1][x] == '.' &&!visited[y-1][x]) {
                        q.push(make_pair(x, y-1));
                        dist[y-1][x] = dist[y][x] + 1;
                        visited[y-1][x] = true;
                    }
                }
                for (int i = 0; i <= W+1; i++) {
                    for (int j = 0; j <= H+1; j++) {
                        ans = max(ans, dist[j][i]);
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}