#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2) return 0;
        vector<int> dp(n, 0);
        dp[0] = 0;
        for (int i = 1; i < n; i++) {
            dp[i] = max(dp[i-1], prices[i] - prices[i-1]);
        }
        int max = dp[n-1];
        for (int i = n-2; i >= 0; i--) {
            dp[i] = max(dp[i], prices[i+1] + dp[i+1]);
            max = max(max, dp[i]);
        }
        return max;
    }
};

int main() {
    Solution s;
    vector<int> prices = {1, 2, 3, 4, 5};
    cout << s.maxProfit(prices) << endl;
    return 0;
}