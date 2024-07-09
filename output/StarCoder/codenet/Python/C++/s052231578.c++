#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr = {111, 222, 333, 444, 555, 666, 777, 888, 999};
    int ans_idx = lower_bound(arr.begin(), arr.end(), N) - arr.begin();
    cout << arr[ans_idx] << endl;
}