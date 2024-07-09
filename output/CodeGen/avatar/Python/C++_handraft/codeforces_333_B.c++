#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n, m, i, j, r, c ;
    int b [ n * 2 ] ;
    cin >> n >> m ;
    for ( i = 0 ; i < n * 2 ; i ++ ) {
        b [ i ] = 0 ;
    }
    for ( i = 0 ; i < m ; i ++ ) {
        cin >> r >> c ;
        b [ r - 1 ] = b [ n + c - 1 ] = 0 ;
    }
    if ( n % 2 and b [ n / 2 ] and b [ n + n / 2 ] ) {
        b [ n / 2 ] = 0 ;
    }
    int sum = 0 ;
    for ( int i = 0 ; i < n * 2 ; i++ ) {
        sum += b [ i ] ;
    }
    cout << sum << endl ;
    return 0 ;
}