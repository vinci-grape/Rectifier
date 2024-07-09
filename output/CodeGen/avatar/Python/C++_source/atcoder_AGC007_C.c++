#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;
int main ( int argc, char *argv [ ] ) {
    int N, d, x ;
    cin >> N >> d >> x ;
    int ret = 0 ;
    while ( N ) {
        ret += d + ( N - 0.5 ) * x ;
        d += ( d / N ) + ( 5 * x ) / ( 2 * N ) ;
        x += 2 * x / N ;
        N -= 1 ;
    }
    cout << ret << endl ;
    return 0 ;
}