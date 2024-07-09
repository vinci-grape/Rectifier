#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    
    vector<vector<int>> a(n, vector<int>(m + 1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    
    int min = INT_MAX;
    for (int i = 0; i < pow(2, n); i++) {
        vector<int> status(n);
        for (int j = 0; j < n; j++) {
            if ((1 & i >> j) == 1) {
                status[j] = 1;
            }
        }
        
        vector<int> res(m + 1);
        for (int j = 0; j < n; j++) {
            if (status[j] == 1) {
                for (int k = 0; k <= m; k++) {
                    res[k] += a[j][k];
                }
            }
        }
        
        bool flag = true;
        for (int j = 1; j <= m; j++) {
            if (res[j] < x) {
                flag = false;
                break;
            }
        }
        
        if (flag) {
            min = std::min(min, res[0]);
        }
    }
    
    if (min == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min << endl;
    }
    
    return 0;
}