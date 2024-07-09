#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int ans = 0;
    if(a[0] > x) {
        cout << 0 << endl;
        return 0;
    }
    
    for(int i = 0; i < n; i++) {
        if(a[i] > x) {
            x = 0;
            break;
        }
        x -= a[i];
        ans++;
    }
    
    if(x != 0) {
        ans--;
    }
    
    cout << ans << endl;
    
    
    return 0;
}