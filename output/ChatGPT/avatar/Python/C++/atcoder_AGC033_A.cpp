#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> graph(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < w; j++) {
            if (row[j] == '#') {
                graph[i][j] = 0;
            } else {
                graph[i][j] = numeric_limits<int>::max();
            }
        }
    }
    for (int x = 0; x < w - 1; x++) {
        for (int y = 0; y < h; y++) {
            graph[y][x + 1] = min(graph[y][x] + 1, graph[y][x + 1]);
        }
    }
    for (int x = w - 1; x > 0; x--) {
        for (int y = 0; y < h; y++) {
            graph[y][x - 1] = min(graph[y][x] + 1, graph[y][x - 1]);
        }
    }
    for (int y = 0; y < h - 1; y++) {
        for (int x = 0; x < w; x++) {
            graph[y + 1][x] = min(graph[y][x] + 1, graph[y + 1][x]);
        }
    }
    for (int y = h - 1; y > 0; y--) {
        for (int x = 0; x < w; x++) {
            graph[y - 1][x] = min(graph[y][x] + 1, graph[y - 1][x]);
        }
    }
    int max_dist = 0;
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            max_dist = max(max_dist, graph[y][x]);
        }
    }
    cout << max_dist << endl;

    return 0;
}