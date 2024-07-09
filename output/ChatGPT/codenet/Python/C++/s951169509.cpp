#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<string> G;
    for (int i = 0; i < H+2; i++) {
        if (i == 0 || i == H+1) {
            G.push_back(string(W+2, '#'));
        } else {
            string row;
            cin >> row;
            G.push_back('#' + row + '#');
        }
    }
    
    int ans = 0;
    for (int sx = 0; sx < W+2; sx++) {
        for (int sy = 0; sy < H+2; sy++) {
            if (G[sy][sx] == '.') {
                vector<vector<int>> dist(H+2, vector<int>(W+2, -1));
                vector<vector<int>> visited(H+2, vector<int>(W+2, -1));
                queue<pair<int, int>> q;
                q.push(make_pair(sx, sy));
                dist[sy][sx] = 0;
                visited[sy][sx] = 1;
                
                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    
                    if (G[y][x+1] == '.' && visited[y][x+1] == -1) {
                        q.push(make_pair(x+1, y));
                        dist[y][x+1] = dist[y][x] + 1;
                        visited[y][x+1] = 1;
                    }
                    
                    if (G[y][x-1] == '.' && visited[y][x-1] == -1) {
                        q.push(make_pair(x-1, y));
                        dist[y][x-1] = dist[y][x] + 1;
                        visited[y][x-1] = 1;
                    }
                    
                    if (G[y+1][x] == '.' && visited[y+1][x] == -1) {
                        q.push(make_pair(x, y+1));
                        dist[y+1][x] = dist[y][x] + 1;
                        visited[y+1][x] = 1;
                    }
                    
                    if (G[y-1][x] == '.' && visited[y-1][x] == -1) {
                        q.push(make_pair(x, y-1));
                        dist[y-1][x] = dist[y][x] + 1;
                        visited[y-1][x] = 1;
                    }
                }
                
                for (int i = 0; i < W+2; i++) {
                    for (int j = 0; j < H+2; j++) {
                        ans = max(ans, dist[j][i]);
                    }
                }
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}