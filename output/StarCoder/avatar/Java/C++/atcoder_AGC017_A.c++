#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    int n, p; 
    int k0 = 0, k1 = 0; 
    cin >> n >> p; 
    for (int i = 0; i < n; i++) { 
        int x; 
        cin >> x; 
        if (x % 2 == 1) k1++; 
        else k0++; 
    } 
    long long ans = 1; 
    for (int i = 0; i < k0; i++) ans *= 2; 
    if (p == 0) { 
        long long add = 0; 
        for (int i = 0; i <= k1; i += 2) 
            add += C(i, k1); 
            ans *= add; 
            cout << ans << endl; 
        } 
    else { 
        long long add = 0; 
        for (int i = 1; i <= k1; i += 2) 
            add += C(i, k1); 
        ans *= add; 
        cout << ans << endl; 
    } 
}