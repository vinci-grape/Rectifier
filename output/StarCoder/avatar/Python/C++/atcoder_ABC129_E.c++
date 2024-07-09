#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    string l;
    cin >> l;
    int n = l.size ( );
    long long dp [ 2 ] [ n + 1 ];
    dp [ 0 ] [ 0 ] = 1;
    for ( int i = 0 ; i < n ; i ++ ) {
        if ( l [ i ] == '0' ) {
            dp [ 0 ] [ i + 1 ] += dp [ 0 ] [ i ];
            dp [ 1 ] [ i + 1 ] += dp [ 1 ] [ i ] * 3;
        }
        else {
            dp [ 0 ] [ i + 1 ] += dp [ 0 ] [ i ] * 2;
            dp [ 0 ] [ i + 1 ] += dp [ 1 ] [ i ];
            dp [ 1 ] [ i + 1 ] += dp [ 0 ] [ i ] * 3;
            dp [ 1 ] [ i + 1 ] += dp [ 1 ] [ i ] * 3;
        }
        dp [ 0 ] [ i + 1 ] %= 1000000007;
        dp [ 1 ] [ i + 1 ] %= 1000000007;
    }
    cout << dp [ 0 ] [ n ] + dp [ 1 ] [ n ] << endl;
    return 0;
}