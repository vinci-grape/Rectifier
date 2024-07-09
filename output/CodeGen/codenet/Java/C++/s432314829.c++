#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
    int n, m, dp[1000005];
    dp[0] = 1;
    dp[1] = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
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