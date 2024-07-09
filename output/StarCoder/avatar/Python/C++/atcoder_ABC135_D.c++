#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dp[n][13];
    for ( int i = 0 ; i < 13 ; i ++ )
        dp[0][i] = 1;
    for ( int i = 1 ; i < n ; i ++ ) {
        for ( int j = 0 ; j < 13 ; j ++ ) {
            dp[i][j] = 0;
            for ( int k = 0 ; k < 10 ; k ++ ) {
                dp[i][(j * 10 + k) % 13] += dp[i - 1][j];
                dp[i][(j * 10 + k) % 13] %= 1000000007;
            }
        }
    }
    if (s[0]!= '?') {
        cout << dp[n - 1][(int)(s[0])];
    } else {
        cout << dp[n - 1][5];
    }
    return 0;
}