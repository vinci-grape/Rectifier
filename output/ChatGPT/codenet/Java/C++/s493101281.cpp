#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> l(n);
    
    for(int i=0; i<n; i++){
        cin >> l[i];
    }
    
    sort(l.begin(), l.end());
    
    cout << l[n/2] - l[n/2-1] << endl;

    return 0;
}