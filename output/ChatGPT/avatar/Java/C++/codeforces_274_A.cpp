#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> arr(n);
    unordered_set<long long> set;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % k != 0) {
            count++;
            set.insert(arr[i]);
        } else if (!set.count(arr[i] / k)) {
            count++;
            set.insert(arr[i]);
        }
    }
    
    cout << count << endl;

    return 0;
}