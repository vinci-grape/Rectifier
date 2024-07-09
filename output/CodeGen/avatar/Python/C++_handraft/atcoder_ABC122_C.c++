#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n, q, i ;
    string s ;
    cin >> n >> q >> s ;
    vector < vector < int > > problems ( q ) ;
    for ( i = 0 ; i < q ; i ++ ) {
        int l, r ;
        cin >> l >> r ;
        problems [ i ]. resize ( r - l + 1 ) ;
        for ( int j = l ; j <= r ; j ++ ) {
            cin >> problems [ i ] [ j - l ] ;
        }
    }
    vector < int > cumsum ( n + 1 ) ;
    cumsum [ 0 ] = 0 ;
    for ( i = 1 ; i <= n ; i ++ ) {
        cumsum [ i ] = cumsum [ i - 1 ] + 1 ;
    }
    for ( i = 0 ; i < q ; i ++ ) {
        int l, r ;
        cin >> l >> r ;
        cumsum [ r ] -= cumsum [ l - 1 ] ;
    }
    for ( i = 0 ; i < q ; i ++ ) {
        cout << cumsum [ problems [ i ]. size ( ) ] << endl ;
    }
    return 0 ;
}