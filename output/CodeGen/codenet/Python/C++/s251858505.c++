#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

class Solution {
public:
    int sum(vector<int>& nums) {
        return accumulate(nums.begin(), nums.end(), 0, plus<int>());
    }
    int plus(int a, int b) {
        return a + b;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    cout << s.sum(nums) << endl;
    return 0;
}