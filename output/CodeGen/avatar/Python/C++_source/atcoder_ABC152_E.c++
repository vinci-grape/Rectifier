#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a[i];
    }
    int ans = 1;
    for ( int i = 0 ; i < n ; i++ ) {
        ans = ans * a[i] % MOD;
    }
    cout << ans % MOD << endl;
    return 0;
}