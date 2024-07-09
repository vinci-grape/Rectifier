#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    long long MOD = 1000000007;
    long long dp[S.length() + 1][13];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for (int i = 0; i < S.length(); i++) {
        if (S.substr(i, 1) == "?") {
            for (int j = 0; j < 10; j++) {
                for (int k = 0; k < 13; k++) {
                    dp[i + 1][(k * 10 + j) % 13] += dp[i][k];
                    dp[i + 1][(k * 10 + j) % 13] %= MOD;
                }
            }
        } else {
            for (int k = 0; k < 13; k++) {
                int x = stoi(S.substr(i, 1));
                dp[i + 1][(k * 10 + x) % 13] += dp[i][k];
                dp[i + 1][(k * 10 + x) % 13] %= MOD;
            }
        }
    }
    cout << dp[S.length()][5] << endl;
    return 0;
}