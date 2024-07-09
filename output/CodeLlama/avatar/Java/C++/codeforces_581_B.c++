#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    long dp[n + 1];
    fill(dp, dp + n + 1, -1);
    dp[n - 1] = a[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        dp[i] = max(dp[i + 1], a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > dp[i + 1]) cout << 0 << " ";
        else cout << (dp[i + 1] - a[i] + 1) << " ";
    }
    cout << endl;
    return 0;
}