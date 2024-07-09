#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    
    sort(l.begin(), l.end());
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int a = l[i];
            int b = l[j];
            
            int right = lower_bound(l.begin(), l.end(), a + b) - l.begin();
            int left = upper_bound(l.begin(), l.end(), max(a - b, b - a)) - l.begin();
            
            int tmp = max(0, right - left);
            
            if (left <= i && i < right) {
                tmp -= 1;
            }
            
            if (left <= j && j < right) {
                tmp -= 1;
            }
            
            ans += tmp;
        }
    }
    
    cout << ans / 3 << endl;
    
    
    return 0;
}