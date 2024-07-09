#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, n;
    cin >> m >> n;
    
    vector<int> manju(m);
    for(int i = 0; i < m; i++) {
        cin >> manju[i];
    }
    
    vector<int> boxlen(n);
    vector<int> boxcost(n);
    for(int i = 0; i < n; i++) {
        cin >> boxlen[i] >> boxcost[i];
    }
    
    sort(manju.begin(), manju.end());
    
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
    for(int i = m-1; i >= 0; i--) {
        for(int j = n-1; j >= 0; j--) {
            int len = i + boxlen[j] >= m ? m : i + boxlen[j];
            int cnt = 0;
            for(int k = i; k < len; k++) {
                cnt += manju[m-1-k];
            }
            dp[i][j] = max(dp[i][j], dp[len][j+1] + cnt - boxcost[j]);
            dp[i][j] = max(dp[i][j], dp[i][j+1]);
        }
    }
    
    cout << dp[0][0] << endl;
    
    return 0;
}