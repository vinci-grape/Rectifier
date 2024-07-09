#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ( ) {
    int n, x, a [ 100 ], ans = 0 ;
    cin >> n >> x ;
    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> a [ i ] ;
    }
    sort ( a, a + n ) ;
    for ( int i = 0 ; i < n ; i ++ ) {
        if ( a [ i ] > x ) {
            cout << 0 << endl ;
            return 0 ;
        }
        for ( int j = i + 1 ; j < n ; j ++ ) {
            if ( a [ j ] - a [ i ] > x ) {
                x = 0 ;
                break ;
            }
            x -= a [ j ] - a [ i ] ;
        }
        ans += x + 1 ;
    }
    if ( x!= 0 ) {
        ans -= 1 ;
    }
    cout << ans << endl ;
    return 0 ;
}