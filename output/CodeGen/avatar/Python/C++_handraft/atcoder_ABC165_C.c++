#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int maxSubArray(int A[], int n) {
        int max_sum = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += A[i];
            if (sum > max_sum)
                max_sum = sum;
            if (sum < 0)
                sum = 0;
        }
        return max_sum;
    }
};

int main() {
    int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(A) / sizeof(A[0]);
    Solution s;
    cout << s.maxSubArray(A, n) << endl;
    return 0;
}