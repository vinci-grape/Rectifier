#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int min = INT_MAX;
    int countNegatives = 0;
    long long sum = 0;
    for (int num : nums) {
        int abs = abs(num);
        sum += abs;
        min = std::min(min, abs);
        if (num < 0) {
            countNegatives++;
        }
    }

    cout << (countNegatives % 2 == 0 ? sum : sum - (min*2)) << endl;

    return 0;
}