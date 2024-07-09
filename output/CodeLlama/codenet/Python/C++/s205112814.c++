#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> gate_cond(m, vector<int>(2));
    for (int i = 0; i < m; i++) {
        cin >> gate_cond[i][0] >> gate_cond[i][1];
    }
    int max_under_th = *max_element(gate_cond.begin(), gate_cond.end(), [](vector<int> a, vector<int> b) {
        return a[0] < b[0];
    });
    int min_upper_th = *min_element(gate_cond.begin(), gate_cond.end(), [](vector<int> a, vector<int> b) {
        return a[1] < b[1];
    });
    if (min_upper_th - max_under_th >= 0) {
        cout << min_upper_th - max_under_th + 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}