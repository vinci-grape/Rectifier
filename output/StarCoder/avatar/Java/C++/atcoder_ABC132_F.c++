#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long mod = (long long)1e9 + 7;
    int n, k;
    cin >> n >> k;
    vector<int> len;
    int l = 1;
    while (l <= n) {
        int r = n / (n / l);
        len.push_back(r - l + 1);
        l = r + 1;
    }
    int q = len.size();
    long long dp[k * (q + 1)];
    for (int j = 1; j <= q; j++) {
        dp[j] = len[j - 1] + dp[j - 1];
    }
    for (int i = 1; i < k; i++) {
        for (int j = 1; j <= q; j++) {
            dp[i * (q + 1) + j] = dp[i * (q + 1) + j - 1] + dp[(i - 1) * (q + 1) + q - j + 1] * len[j - 1];
            dp[i * (q + 1) + j] %= mod;
        }
    }
    cout << dp[k * (q + 1) - 1];
}