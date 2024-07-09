#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int x, y, a, b ;
    cin >> x >> y >> a >> b ;
    vector < pair < int, int > > games ;
    for ( int i = a ; i <= x ; ++i ) {
        if ( i <= b ) continue ;
        for ( int j = b ; j <= y ; ++j ) {
            if ( i > j ) continue ;
            games.push_back ( make_pair ( i, j ) ) ;
        }
    }
    cout << games.size ( ) << endl ;
    for_each ( games.begin ( ), games.end ( ), [ ] ( pair < int, int > p ) {
        cout << p.first << " " << p.second << endl ;
    } ) ;
    return 0 ;
}