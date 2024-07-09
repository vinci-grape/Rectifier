#include <iostream>
#include <vector>
using namespace std;

int main ( ) {
    int n, m, i, j, k, mx, ind ;
    vector < int > l ( n );
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
    mx = l2 [ 0 ];
    ind = 0;
    for ( int i = 1; i < n; i++ ) {
        if ( l2 [ i ] > mx ) {
            mx = l2 [ i ];
            ind = i;
        }
    }
    cout << ind + 1 << endl ;
    return 0 ;
}