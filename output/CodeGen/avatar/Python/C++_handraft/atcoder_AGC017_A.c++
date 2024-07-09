#include <iostream>
#include <cstdlib>
using namespace std;

long long combi ( int N, int K ) {
    long long a = 1;
    for ( int i = 0; i < K; i++ ) {
        a *= N - i;
    }
    for ( int j = 0; j < K; j++ ) {
        a /= j + 1;
    }
    return a;
}

int main ( ) {
    int N, P ;
    cin >> N >> P ;
    int * lis = new int [ N ] ;
    for ( int i = 0 ; i < N ; i ++ ) {
        cin >> lis [ i ] ;
    }
    int * ls = new int [ N ] ;
    for ( int i = 0 ; i < N ; i ++ ) {
        ls [ i ] = lis [ i ] % 2 ;
    }
    int one = 0, zero = 0 ;
    for ( int j = 0 ; j < N ; j ++ ) {
        zero += ls [ j ] == 0 ;
    }
    long long pattern_a = 0, pattern_b = 0 ;
    for ( int j = 0 ; j < zero + 1 ; j ++ ) {
        pattern_b += combi ( zero, j ) ;
    }
    int time = 0 ;
    while ( time <= one ) {
        if ( time % 2 == P ) {
            pattern_a += combi ( one, time ) ;
        }
        time ++ ;
    }
    cout << pattern_a * pattern_b << endl ;
    delete [] lis ;
    delete [] ls ;
    return 0 ;
}