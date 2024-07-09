#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main ( ) {
    int x, t, a, b, da, db ;
    cin >> x >> t >> a >> b >> da >> db ;
    if ( x == 0 ) {
        cout << "YES" << endl ;
        return 0 ;
    }
    int a_time = min ( a / da, t - 1 ) ;
    int b_time = min ( b / db, t - 1 ) ;
    for ( int i = a_time + 1 ; i <= a_time + t ; i++ ) {
        for ( int j = b_time + 1 ; j <= b_time + t ; j++ ) {
            if ( a - da * i == x || b - db * j == x ) {
                cout << "YES" << endl ;
                return 0 ;
            }
            if ( ( a - da * i ) + ( b - db * j ) == x ) {
                cout << "YES" << endl ;
                return 0 ;
            }
        }
    }
    cout << "NO" << endl ;
    return 0 ;
}