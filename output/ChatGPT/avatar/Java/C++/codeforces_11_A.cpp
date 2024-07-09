#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int result = 0;
    int a = 0;
    for (int i = 1; i < n; i++) {
        a = (nums[i - 1] - nums[i]);
        if (a >= 0) {
            result += a / d + 1;
            nums[i] += (a / d + 1) * d;
        }
    }
    cout << result << endl;
}