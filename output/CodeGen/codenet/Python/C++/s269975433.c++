#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    vector<vector<int> > q_groups(q);
    for (int i = 0; i < q; i++) {
        int n_q, m_q, k_q;
        cin >> n_q >> m_q >> k_q;
        q_groups[i].resize(n_q);
        for (int j = 0; j < n_q; j++) {
            cin >> q_groups[i][j];
        }
    }
    int max_score = 0;
    for (int i = 0; i < n; i++) {
        int temp_score = 0;
        for (int j = 0; j < q; j++) {
            if (p[i] - 1 == q_groups[j][0] - 1 && p[i] - 1 == q_groups[j][1] - 1) {
                temp_score += q_groups[j][2];
            }
        }
        max_score = max(max_score, temp_score);
    }
    cout << max_score << endl;
    return 0;
}