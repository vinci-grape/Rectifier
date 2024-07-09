#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *nums = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int min = INT_MAX;
    int countNegatives = 0;
    long sum = 0;
    for (int num : nums) {
        int abs = abs(num);
        sum += abs;
        min = min < abs? min : abs;
        if (num < 0) {
            countNegatives++;
        }
    }
    cout << countNegatives % 2 == 0? sum : sum - (min * 2) << endl;
    return 0;
}