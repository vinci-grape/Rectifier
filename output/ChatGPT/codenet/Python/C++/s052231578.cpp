#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> arr = {111, 222, 333, 444, 555, 666, 777, 888, 999};
    auto it = lower_bound(arr.begin(), arr.end(), N);
    cout << *it << endl;

    return 0;
}