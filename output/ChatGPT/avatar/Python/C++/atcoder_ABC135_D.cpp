#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string S;
    cin >> S;
    int n = S.length();
    
    if (n == 1) {
        if (S == "5" || S == "?") {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }
    
    vector<vector<int>> dp(n, vector<int>(13, 0));
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (S[i] != '?') {
                dp[i][S[i] - '0'] = 1;
            } else {
                for (int j = 0; j < 10; j++) {
                    dp[i][j] = 1;
                }
            }
        } else {
            if (S[i] != '?') {
                for (int k = 0; k < 13; k++) {
                    dp[i][(k * 10 + (S[i] - '0')) % 13] += dp[i - 1][k];
                    dp[i][(k * 10 + (S[i] - '0')) % 13] %= mod;
                }
            } else {
                for (int j = 0; j < 10; j++) {
                    for (int k = 0; k < 13; k++) {
                        dp[i][(k * 10 + j) % 13] += dp[i - 1][k];
                        dp[i][(k * 10 + j) % 13] %= mod;
                    }
                }
            }
        }
    }
    
    cout << dp[n - 1][5] << endl;
    
    return 0;
}