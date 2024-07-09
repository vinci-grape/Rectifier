#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX = 1005;

int H, W;
string G[MAX];
int dist[MAX][MAX];
int visited[MAX][MAX];
queue<pair<int, int> > q;

int main() {
    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        cin >> G[i];
    }
    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            if (i == 0 || i == H+1 || j == 0 || j == W+1) {
                dist[i][j] = -1;
            } else {
                dist[i][j] = -1;
                q.push(make_pair(i, j));
            }
        }
    }
    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first, y = p.second;
        if (G[y][x+1] == '.' && visited[y][x+1] == -1) {
            q.push(make_pair(x+1, y));
            visited[y][x+1] = 1;
            dist[y][x+1] = dist[y][x] + 1;
        }
        if (G[y][x-1] == '.' && visited[y][x-1] == -1) {
            q.push(make_pair(x-1, y));
            visited[y][x-1] = 1;
            dist[y][x-1] = dist[y][x] + 1;
        }
        if (G[y+1][x] == '.' && visited[y+1][x] == -1) {
            q.push(make_pair(x, y+1));
            visited[y+1][x] = 1;
            dist[y+1][x] = dist[y][x] + 1;
        }
        if (G[y-1][x] == '.' && visited[y-1][x] == -1) {
            q.push(make_pair(x, y-1));
            visited[y-1][x] = 1;
            dist[y-1][x] = dist[y][x] + 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}