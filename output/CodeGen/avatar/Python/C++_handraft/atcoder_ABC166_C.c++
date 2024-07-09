#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main ( ) {
    int n, m ;
    cin >> n >> m ;
    vector <int> p ( n + 1 ) ;
    vector <int> h ( n + 1 ) ;
    for ( int i = 1 ; i <= n ; i ++ ) {
        cin >> p [ i ] >> h [ i ] ;
    }
    map <int, vector <int> > path ;
    for ( int i = 0 ; i < m ; i ++ ) {
        int a, b ;
        cin >> a >> b ;
        path [ a ].push_back ( b ) ;
        path [ b ].push_back ( a ) ;
    }
    int c = 0 ;
    for ( int i = 1 ; i <= n ; i ++ ) {
        bool f = false ;
        for ( int j = 0 ; j < path [ i ].size ( ) ; j ++ ) {
            if ( h [ i ] <= h [ path [ i ] [ j ] ] ) {
                f = true ;
                break ;
            }
        }
        if ( f == false ) {
            c ++ ;
        }
    }
    cout << c << endl ;
    return 0 ;
}