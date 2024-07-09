#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main ( ) {
    int N;
    cin >> N;
    int * XY;
    XY = new int [ N * 2 ];
    for ( int i = 0 ; i < N * 2 ; i++ ) {
        cin >> XY [ i ];
    }
    for ( int i = 0 ; i < N ; i++ ) {
        int x, y;
        x = XY [ 2 * i ];
        y = XY [ 2 * i + 1 ];
        int D[ N ];
        for ( int j = 0 ; j < N ; j++ ) {
            D[ j ] = atan2 ( XY[ 2 * j ] - x, XY[ 2 * j + 1 ] - y );
        }
        sort ( D, D + N );
        D[ N ] = D[ 0 ] + 2 * pi;
        int ans = 0;
        for ( int j = 0 ; j < N ; j++ ) {
            if ( D[ j + 1 ] - D[ j ] >= pi ) {
                ans = ( D[ j + 1 ] - D[ j ] ) - pi;
            }
        }
        cout << ( ans / ( 2 * pi ) ) << endl;
    }
    delete [] XY;
    return 0;
}