#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<long long> dp(n + 1, -1);
    dp[n - 1] = a[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        dp[i] = max(dp[i + 1], a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > dp[i + 1]) {
            cout << 0 << " ";
        } else {
            cout << (dp[i + 1] - a[i] + 1) << " ";
        }
    }
    cout << endl;
    
}