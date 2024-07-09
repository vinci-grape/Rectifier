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
        int max_profit = 0;
        for (int i = 1; i < n; ++i) {
            dp[i] = max(dp[i - 1], prices[i] - prices[i - 1]);
            max_profit = max(max_profit, dp[i]);
        }
        return max_profit;
    }
};

int main() {
    Solution s;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << s.maxProfit(prices) << endl;
    return 0;
}