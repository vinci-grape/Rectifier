#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main ( ) {
    int n, s, f, t, x, c ;
    cin >> n >> s >> f >> t ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> f >> t ;
        x = t - ( s - f ) ;
        if ( x > c ) {
            c = x ;
        }
    }
    cout << s + c ;
    return 0 ;
}