#include <iostream>
#include <vector>
using namespace std;

const int M = 1000000007;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<vector<int>> dp(n + 1, vector<int>(2));
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