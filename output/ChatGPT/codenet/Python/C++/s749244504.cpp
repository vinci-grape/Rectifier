#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <queue>

using namespace std;

const int INF = numeric_limits<int>::max();

int main() {
    int h, w;
    cin >> h >> w;
    
    vector<vector<int>> C(10, vector<int>(10));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> C[i][j];
        }
    }
    
    vector<vector<int>> A(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> A[i][j];
        }
    }
    
    vector<vector<int>> G(10, vector<int>(10));
    for (int i = 0; i < 10; i++) {
        if (i == 1) {
            continue;
        }
        for (int j = 0; j < 10; j++) {
            G[i][j] = C[i][j];
        }
    }
    
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (G[i][k] != INF && G[k][j] != INF) {
                    G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
                }
            }
        }
    }
    
    int s = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (A[i][j] == -1 || A[i][j] == 1) {
                continue;
            }
            s += G[A[i][j]][1];
        }
    }
    
    cout << s << endl;
    
    
    return 0;
}