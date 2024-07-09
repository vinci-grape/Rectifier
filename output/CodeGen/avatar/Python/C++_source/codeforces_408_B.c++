#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <cassert>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n == 0) return 0;
        int dp[n];
        for (int i = 0; i < n; ++i) {
            dp[i] = cost[i];
        }
        int res = 0;
        for (int i = 0; i < n - 1; ++i) {
            res += min(dp[i], dp[i + 1]);
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> cost = {1, 2, 3, 4};
    cout << s.minCostClimbingStairs(cost) << endl;
    return 0;
}