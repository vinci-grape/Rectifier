#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,T;
    cin >> N >> T;
    vector<vector<int>> L(N, vector<int>(2));
    for(int i = 0; i < N; i++) {
        cin >> L[i][0] >> L[i][1];
    }
    
    vector<vector<int>> dp(N+1, vector<int>(T, 0));
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < T; j++) {
            if(j < L[i][0]) {
                dp[i+1][j] = dp[i][j];
            }
            else {
                dp[i+1][j] = max(dp[i][j], dp[i][j-L[i][0]]+L[i][1]);
            }
        }
    }
    
    vector<int> used;
    int B = dp[N][T-1];
    int j = T-1;
    for(int i = N-1; i >= 0; i--) {
        if(B == dp[i][j]) {
            continue;
        }
        B -= L[i][1];
        used.push_back(i);
        j -= L[i][0];
    }
    
    int ans = dp[N][T-1];
    int c = 0;
    for(int i = 0; i < N; i++) {
        if(find(used.begin(), used.end(), i) != used.end()) {
            continue;
        }
        c = max(c, L[i][1]);
    }
    
    cout << ans+c << endl;
    
    return 0;
}