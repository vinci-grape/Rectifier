#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    int dp[n];
    for (int i = 0; i < n; i++) {
        dp[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        dp[i] = max(dp[i], v[i] - c[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        dp[i] = max(dp[i], dp[i + 1] + v[i + 1] - c[i + 1]);
    }
    cout << dp[0];
    return 0;
}