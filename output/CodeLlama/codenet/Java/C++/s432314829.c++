#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int dp[n + 2];
    dp[n + 1] = 0;
    dp[n] = 1;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        dp[x] = -1;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (dp[i] == -1)
            dp[i] = 0;
        else
            dp[i] = (dp[i + 1] + dp[i + 2]) % 1000000007;
    }
    cout << dp[0];
    return 0;
}