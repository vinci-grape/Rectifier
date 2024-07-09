#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int k;
    cin >> k;
    int t = 0;
    for ( int i = 1 ; i <= k ; i++ ) {
        t = ( t % k ) * 10 + 7;
        if ( t % k == 0 ) {
            cout << i << endl;
            break;
        }
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}