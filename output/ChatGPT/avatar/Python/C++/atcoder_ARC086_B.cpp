#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    
    int max_val = 0;
    int max_sign = 0;
    int max_index = -1;
    for(int i=0; i<N; i++) {
        if(abs(a[i]) > max_val) {
            max_val = abs(a[i]);
            max_sign = (a[i] > 0) - (a[i] < 0);
            max_index = i;
        }
    }
    
    if(max_sign == 0) {
        cout << 0 << "\n";
    }
    else if(max_sign == 1) {
        cout << 2*N-1 << "\n";
        for(int i=0; i<N; i++) {
            cout << max_index+1 << " " << i+1 << "\n";
        }
        for(int i=0; i<N-1; i++) {
            cout << i+1 << " " << i+2 << "\n";
        }
    }
    else {
        cout << 2*N-1 << "\n";
        for(int i=0; i<N; i++) {
            cout << max_index+1 << " " << i+1 << "\n";
        }
        for(int i=N-1; i>0; i--) {
            cout << i+1 << " " << i << "\n";
        }
    }
    
    return 0;
}