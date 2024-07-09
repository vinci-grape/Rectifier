#include <iostream>
#include <vector>
#include <cmath>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int minVal = INT_MAX;
    int countNegatives = 0;
    long sum = 0;
    for (int num : nums) {
        int absVal = abs(num);
        sum += absVal;
        minVal = min(minVal, absVal);
        if (num < 0) {
            countNegatives++;
        }
    }

    cout << (countNegatives % 2 == 0 ? sum : sum - (minVal*2)) << endl;
}