#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_jump = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i + nums[i] > max_jump) {
                max_jump = i + nums[i];
            }
        }
        return max_jump >= nums.size() - 1;
    }
};

int main ( ) {
    vector<int> nums = {2,3,1,1,4};
    Solution sol;
    cout << sol.canJump ( nums ) << endl;
    return 0;
}