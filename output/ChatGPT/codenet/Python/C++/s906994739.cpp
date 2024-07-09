#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> F(n, vector<int>(10));
    vector<vector<int>> P(n, vector<int>(11));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> F[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 11; j++) {
            cin >> P[i][j];
        }
    }
    
    int ans = -10e18;
    
    for (int i = 1; i < (1 << 10); i++) {
        int tmp = 0;
        vector<int> lst(n);
        
        for (int j = 0; j < 10; j++) {
            if ((i >> j) & 1) {
                for (int k = 0; k < n; k++) {
                    lst[k] += F[k][j];
                }
            }
        }
        
        for (int k = 0; k < n; k++) {
            tmp += P[k][lst[k]];
        }
        
        ans = max(ans, tmp);
    }
    
    cout << ans << endl;
    
    return 0;
}