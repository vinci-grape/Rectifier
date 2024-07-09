#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<vector<int>> Q_groups(Q, vector<int>(4));
    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> Q_groups[i][j];
        }
    }

    int max_score = 0;
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= M; j++) {
            for (int k = 1; k <= M; k++) {
                for (int l = 1; l <= M; l++) {
                    vector<int> p = {i, j, k, l};
                    int temp_score = 0;
                    for (int m = 0; m < Q; m++) {
                        if (p[Q_groups[m][1] - 1] - p[Q_groups[m][0] - 1] == Q_groups[m][2]) {
                            temp_score += Q_groups[m][3];
                        }
                    }
                    max_score = max(max_score, temp_score);
                }
            }
        }
    }

    cout << max_score << endl;


    return 0;
}