#include <cstdio>
#include <cmath>

int main ( ) {
    double r, D, x ;
    scanf ( "%lf%lf%lf", &r, &D, &x ) ;
    for ( int i = 2 ; i < 12 ; i ++ ) {
        printf ( "%d\n", ( int ) ( pow(r, i - 1) * ( x + D / ( 1 - r ) ) - D / ( 1 - r ) ) ) ;
    }
    return 0 ;
}