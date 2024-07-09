#include <iostream>
#include <vector>
using namespace std;

int twos_in_factorial(int n) {
    return n - __builtin_popcount(n);
}

bool parity_of_nCr(int n, int i) {
    auto f = twos_in_factorial;
    return f(n) - f(n - i) - f(i) > 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num - 1);
    }
    bool no_one = false;
    if (find(nums.begin(), nums.end(), 1) == nums.end()) {
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] / 2;
        }
        no_one = true;
    }
    bool is_odd = false;
    for (int i = 0; i < n; i++) {
        if (!parity_of_nCr(n - 1, i) && nums[i] & 1) {
            is_odd ^= 1;
        }
    }
    if (!is_odd) {
        cout << 0 << endl;
    } else {
        cout << (1 << no_one) << endl;
    }

    return 0;
}