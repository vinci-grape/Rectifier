#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int pre = INT_MAX;
    int ans = 0;
    sort(a.begin(), a.end(), greater<int>());
    
    for (int j = 0; j < n; j++) {
        ans += max(0, min(pre - 1, a[j]));
        pre = max(0, min(pre - 1, a[j]));
    }
    
    cout << ans << endl;
    
    
    return 0;
}