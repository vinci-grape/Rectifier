#include <iostream>
#include <vector>
using namespace std;

int main ( ) {
    int n, m, i, j, k, l, mx, ind ;
    vector < int > l2 ;
    cin >> n >> m ;
    for ( i = 0 ; i < n ; i ++ ) {
        cin >> l [ i ] ;
    }
    for ( i = 0 ; i < n ; i ++ ) {
        if ( l [ i ] % m == 0 ) {
            l2.push_back ( l [ i ] / m ) ;
        }
        else {
            l2.push_back ( l [ i ] / m + 1 ) ;
        }
    }
    mx = max ( l2 ) ;
    for ( i = 0 ; i < n ; i ++ ) {
        if ( l2 [ i ] == mx ) {
            ind = i ;
        }
    }
    cout << ind + 1 << endl ;
    return 0 ;
}