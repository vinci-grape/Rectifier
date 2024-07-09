#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < nums.size() - 2; ++i) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (abs(sum - target) < abs(ans - target)) {
                    ans = sum;
                }
                if (sum < target) {
                    ++j;
                } else if (sum > target) {
                    --k;
                } else {
                    return target;
                }
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    Solution s;
    cout << s.threeSumClosest(nums, 1) << endl;
    return 0;
}