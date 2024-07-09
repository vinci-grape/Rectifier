#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch(int A[], int n, int key) {
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (A[mid] < key)
                low = mid + 1;
            else if (A[mid] > key)
                high = mid - 1;
            else
                return mid;
        }
        return -1;
    }
};

int main ( ) {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof ( A ) / sizeof ( A[0] );
    Solution sol;
    cout << sol.binarySearch ( A, n, 5 ) << endl;
    return 0;
}