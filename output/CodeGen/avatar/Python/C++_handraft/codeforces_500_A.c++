#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    int n, t ;
    cin >> n >> t ;
    int s [ n ] ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> s [ i ] ;
    }
    int current_cell = 0 ;
    while ( current_cell <= t ) {
        current_cell += s [ current_cell - 1 ] ;
        if ( current_cell == t ) {
            cout << "YES" << endl ;
            return 0 ;
        }
    }
    cout << "NO" << endl ;
    return 0 ;
}