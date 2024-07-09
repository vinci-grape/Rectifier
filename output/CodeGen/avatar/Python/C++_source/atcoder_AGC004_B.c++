#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        int m = 10e15;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (i - j < 0) {
                    continue;
                }
                int k = i - j;
                if (k < 0) {
                    k += n;
                }
                dp[i] = min(dp[i], dp[j] + nums[k]);
            }
            m = min(m, dp[i]);
        }
        return m == 10e15? -1 : m;
    }
};

int main ( ) {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Solution sol;
    cout << sol.minSubArrayLen(x, a) << endl;
    return 0;
}