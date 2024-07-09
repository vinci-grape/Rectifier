#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> c(n);
    vector<int> dp(n);

    for (int i = 0; i < n; i++) {
        dp[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        int tmp = dp[i - 1] + (v[i - 1] - c[i - 1]);
        dp[i] = tmp > dp[i - 1] ? tmp : dp[i - 1];
    }

    int tmp = dp[n - 1] + (v[n - 1] - c[n - 1]);
    dp[n - 1] = tmp > dp[n - 1] ? tmp : dp[n - 1];

    cout << dp[n - 1] << endl;

}