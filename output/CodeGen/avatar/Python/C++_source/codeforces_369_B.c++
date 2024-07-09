#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n, k, l, r, sa, sk ;
    cin >> n >> k >> l >> r >> sa >> sk ;
    int * ans = new int [ k + 1 ] ;
    for ( int i = 0 ; i < k + 1 ; i ++ ) {
        ans [ i ] = i ;
    }
    for ( int i = 0 ; i < n - k ; i ++ ) {
        ans [ i + k ] = i + k ;
    }
    for ( int i = 0 ; i < k ; i ++ ) {
        ans [ i + n - k ] = i + n - k ;
    }
    cout << " " << ans [ 0 ] ;
    for ( int i = 1 ; i < k + 1 ; i ++ ) {
        cout << " " << ans [ i ] ;
    }
    cout << endl ;
    return 0 ;
}