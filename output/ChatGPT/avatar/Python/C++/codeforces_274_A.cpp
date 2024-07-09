#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int num, k;
    cin >> num >> k;
    
    vector<int> arr(num);
    for(int i=0; i<num; i++) {
        cin >> arr[i];
    }
    
    set<int> different;
    int temp = 0;
    
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<num; i++) {
        int x = arr[i];
        if(x % k != 0 || different.find(x / k) == different.end()) {
            different.insert(x);
        }
        temp = max(temp, static_cast<int>(different.size()));
    }
    
    cout << temp << endl;
    
    
    return 0;
}