#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long mod = 1e9 + 7;
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
    vector<long long> dp(k * (q + 1));
    for (int j = 1; j <= q; j++) {
        dp[j] = len[j - 1] + dp[j - 1];
    }
    for (int i = 1; i < k; i++) {
        for (int j = 1; j <= q; j++) {
            dp[i * (q + 1) + j] = dp[i * (q + 1) + j - 1] + dp[(i - 1) * (q + 1) + q - j + 1] * len[j - 1];
            dp[i * (q + 1) + j] %= mod;
        }
    }
    cout << dp[k * (q + 1) - 1] << endl;

    return 0;
}