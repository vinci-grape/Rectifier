#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(3);
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    vector<int> dp(n+1, -1e9);
    dp[0] = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < 3; j++) {
            if(i - arr[j] >= 0) {
                dp[i] = max(dp[i], dp[i-arr[j]] + 1);
            }
        }
    }

    cout << dp[n] << endl;

}