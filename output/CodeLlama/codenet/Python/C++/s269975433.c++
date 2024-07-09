#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<vector<int>> Q_groups(Q);
    for (int i = 0; i < Q; i++) {
        cin >> Q_groups[i][0] >> Q_groups[i][1] >> Q_groups[i][2] >> Q_groups[i][3];
    }
    int max_score = 0;
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= M; j++) {
            int temp_score = 0;
            for (int k = 0; k < Q; k++) {
                if (i < j) {
                    if (Q_groups[k][0] <= i && i <= Q_groups[k][1] && Q_groups[k][2] == j - i) {
                        temp_score += Q_groups[k][3];
                    }
                } else {
                    if (Q_groups[k][0] <= j && j <= Q_groups[k][1] && Q_groups[k][2] == i - j) {
                        temp_score += Q_groups[k][3];
                    }
                }
            }
            max_score = max(max_score, temp_score);
        }
    }
    cout << max_score << endl;
    return 0;
}