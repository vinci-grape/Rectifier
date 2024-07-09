#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[3];
    for (int i = 0; i < 3; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + 3, greater<int>());
    cout << nums[0] * 10 + nums[1] + nums[2] << endl;
    return 0;
}