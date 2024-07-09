#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> gate_cond(m, vector<int>(2));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> gate_cond[i][j];
        }
    }
    int max_under_th = *max_element(gate_cond[0].begin(), gate_cond[0].end());
    int min_upper_th = *min_element(gate_cond[0].begin(), gate_cond[0].end());
    if (min_upper_th - max_under_th >= 0) {
        cout << min_upper_th - max_under_th + 1;
    } else {
        cout << 0;
    }
    return 0;
}