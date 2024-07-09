#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> res;
    int o = 0, e = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            o++;
        } else {
            e++;
        }
    }
    
    for (int i = 0; i < k; i++) {
        int l, r;
        cin >> l >> r;
        
        if ((r - l + 1) % 2 == 1) {
            res.push_back(0);
        } else {
            if ((r - l + 1) / 2 <= o && (r - l + 1) / 2 <= e) {
                res.push_back(1);
            } else {
                res.push_back(0);
            }
        }
    }
    
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    
    return 0;
}