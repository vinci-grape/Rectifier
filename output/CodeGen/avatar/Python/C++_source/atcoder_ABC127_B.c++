#include <cstdio>

int main ( ) {
    int r, D, x ;
    scanf ( "%d%d%d", &r, &D, &x ) ;
    for ( int i = 2 ; i < 12 ; i ++ ) {
        printf ( "%d\n", ( int ) ( ( r ** ( i - 1 ) ) * ( x + D / ( 1 - r ) ) - D / ( 1 - r ) ) ) ;
    }
    return 0 ;
}