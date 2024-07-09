#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long dp[n][13];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 13; j++) {
            dp[i][j] = 0;
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        int num = s[i] - '0';
        for (int j = 0; j < 13; j++) {
            for (int k = 0; k < 10; k++) {
                dp[i][(j * 10 + k) % 13] += dp[i - 1][j];
                dp[i][(j * 10 + k) % 13] %= 1000000007;
            }
        }
        if (s[i] == '?') {
            for (int j = 0; j < 13; j++) {
                for (int k = 0; k < 10; k++) {
                    dp[i][(j * 10 + k) % 13] += dp[i - 1][j];
                    dp[i][(j * 10 + k) % 13] %= 1000000007;
                }
            }
        }
    }
    cout << dp[n - 1][5];
}