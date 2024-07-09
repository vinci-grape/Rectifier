#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int dfs ( int cur, char last3 [ ] ) {
    if ( cur == n ) {
        return 1;
    }
    int ret = 0;
    for ( int i = 0 ; i < 4 ; ++ i ) {
        char c = last3 [ i ];
        if ( i >= 1 ) {
            c = last3 [ i - 1 ];
            c, last3 [ i ] = last3 [ i ], c;
        }
        if ( strchr ( "AGC", c )!= NULL ) {
            ret = ( ret + dfs ( cur + 1, last3 + 1 ) ) % mod;
        }
    }
    return ret;
}

int main ( ) {
    int n;
    cin >> n;
    char last3 [ 4 ] = { 'T', 'T', 'T', 'T' };
    cout << dfs ( 0, last3 ) << endl;
    return 0;
}