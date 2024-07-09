#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ( ) {
    int n, m ;
    cin >> n >> m ;
    vector <string> l ( n ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        string s ;
        cin >> s ;
        for ( int j = 0 ; j < m ; j++ ) {
            if ( s [ j ] == '.' ) {
                if ( ( i + j ) & 1 ) s [ j ] = 'W' ;
                else s [ j ] = 'B' ;
            }
        }
        l [ i ] = s ;
    }
    for ( int i = 0 ; i < n ; i++ ) {
        cout << l [ i ] << endl ;
    }
    return 0 ;
}