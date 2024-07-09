#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> A;
    int num;
    
    // Input array elements
    for (int i = 0; i < 4; i++) {
        cin >> num;
        A.push_back(num);
    }
    
    if (A[1] <= A[2] || A[3] <= A[0]) {
        cout << 0 << endl;
    } else {
        sort(A.begin(), A.end());
        cout << A[2] - A[1] << endl;
    }
    
    return 0;
}