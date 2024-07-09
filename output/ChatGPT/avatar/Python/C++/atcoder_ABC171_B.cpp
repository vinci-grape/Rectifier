#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    cout << sum << endl;

    return 0;
}