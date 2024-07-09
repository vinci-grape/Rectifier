#include <iostream>
#include <string>
using namespace std;

const int mod = 1000000007;

int main() {
    string l;
    cin >> l;
    int n = l.length();
    int dp[n+1][2] = {0};
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        char c = l[i];
        if (c == '0') {
            dp[i+1][0] += dp[i][0];
            dp[i+1][1] += dp[i][1] * 3;
        } else {
            dp[i+1][0] += dp[i][0] * 2;
            dp[i+1][1] += dp[i][0];
            dp[i+1][1] += dp[i][1] * 3;
        }
        dp[i+1][0] %= mod;
        dp[i+1][1] %= mod;
    }
    cout << (dp[n][0] + dp[n][1]) % mod << endl;

    return 0;
}