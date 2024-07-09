#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    sort(nums.begin(), nums.end(), greater<int>());
    
    cout << nums[0]*10 + nums[1] + nums[2] << endl;
    
    
    return 0;
}