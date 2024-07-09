#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N,D;
    cin >> N >> D;
    vector<vector<int> > mat(N,vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }
    int c = 0;
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            int dist = sqrt(pow(mat[i][0] - mat[j][0], 2) + pow(mat[i][1] - mat[j][1], 2));
            if (dist == dist) {
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}