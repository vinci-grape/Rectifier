#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int n;
    cin >> n;
    vector < pair < int, int > > menu;
    for ( int i = 0; i < n; i++ ) {
        int m, e;
        cin >> m >> e;
        if ( e == 0 ) e = 10;
        menu.push_back ( { m, e } );
    }
    sort ( menu.begin ( ), menu.end ( ), [] ( pair < int, int > a, pair < int, int > b ) {
        return a.second < b.second;
    } );
    int ans = 0;
    for ( int i = 1; i < menu.size ( ); i++ ) {
        ans += ( menu [ i ].first + 9 ) / 10 * 10;
    }
    cout << ans + menu [ 0 ].first << endl;
    return 0;
}