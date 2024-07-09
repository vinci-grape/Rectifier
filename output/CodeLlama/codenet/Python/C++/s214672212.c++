#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3, greater<int>());
    cout << nums[0] * 10 + nums[1] + nums[2];
    return 0;
}