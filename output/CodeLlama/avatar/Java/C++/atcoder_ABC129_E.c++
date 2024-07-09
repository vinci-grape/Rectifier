#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int M = 1000000007;
    string s;
    cin >> s;
    int n = s.size();
    int dp[n + 1][2];
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            dp[i + 1][0] = dp[i][0];
            dp[i + 1][1] = dp[i][1];
        } else {
            dp[i + 1][1] = (dp[i][0] + dp[i][1]) % M;
        }
        if (s[i] == '0') {
            dp[i + 1][1] += (dp[i][1] * 2) % M;
            dp[i + 1][1] %= M;
        } else {
            dp[i + 1][0] += (dp[i][0] * 2) % M;
            dp[i + 1][1] += (dp[i][1] * 2) % M;
            dp[i + 1][0] %= M;
            dp[i + 1][1] %= M;
        }
    }
    cout << (dp[n][0] + dp[n][1]) % M << endl;
    return 0;
}