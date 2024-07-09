#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main ( ) {
    int menu [ 5 ], e, i, j, ans = 0, n = 0 ;
    for ( i = 0 ; i < 5 ; i++ ) {
        cin >> menu [ i ] >> e ;
        if ( e == 0 )
            e = 10 ;
        menu [ i ] = menu [ i ] * e ;
    }
    for ( i = 1 ; i < 5 ; i++ ) {
        for ( j = i + 1 ; j < 5 ; j++ ) {
            if ( menu [ i ] > menu [ j ] ) {
                menu [ i ] = menu [ j ] ;
                menu [ j ] = menu [ i ] ;
                menu [ i ] = menu [ i ] * e ;
                menu [ j ] = menu [ j ] * e ;
            }
        }
    }
    for ( i = 0 ; i < 5 ; i++ ) {
        ans += ( int ) ( ceil ( menu [ i ] / 10 ) ) * 10 ;
        n += 1 ;
    }
    cout << ans + menu [ 0 ] << endl ;
    return 0 ;
}