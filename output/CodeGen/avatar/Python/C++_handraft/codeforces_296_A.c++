#include <iostream>
#include <set>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    int m[1000];
    for ( int i = 0; i < n; i++ ) {
        cin >> m[i];
    }
    set<int> s;
    for ( int i = 0; i < n; i++ ) {
        if ( m[i] >= n / 2 + 1 ) {
            s.insert ( m[i] );
        }
    }
    bool possible = true;
    for ( set<int>::iterator it = s.begin ( ); it!= s.end ( ); it++ ) {
        if ( s.count ( *it ) >= n / 2 + 1 ) {
            possible = false;
            break;
        }
    }
    cout << ( possible? "YES" : "NO" ) << endl;
    return 0;
}