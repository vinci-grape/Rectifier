#include <bits/stdc++.h>
using namespace std;
int solve ( int n, vector < vector < int > > &ls_xyh ) {
    int x0 = -1;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( ls_xyh [ i ] [ 2 ] > 0 ) {
            x0 = ls_xyh [ i ] [ 0 ];
            break;
        }
    }
    vector < vector < int > > cands;
    for ( int i = 0 ; i < n ; i++ ) {
        int x = ls_xyh [ i ] [ 0 ];
        int y = ls_xyh [ i ] [ 1 ];
        int h = ls_xyh [ i ] [ 2 ];
        for ( int cx = 0 ; cx <= 100 ; cx++ ) {
            for ( int cy = 0 ; cy <= 100 ; cy++ ) {
                int ch = h + abs ( cx - x ) + abs ( cy - y );
                cands.push_back ( { cx, cy, ch } );
            }
        }
    }
    sort ( cands.begin ( ), cands.end ( ), [ ]( vector < int > &a, vector < int > &b ) {
        return a [ 2 ] > b [ 2 ];
    } );
    int xx = cands [ 0 ] [ 0 ];
    int yy = cands [ 0 ] [ 1 ];
    int hh = cands [ 0 ] [ 2 ];
    return to_string ( xx ) + " " + to_string ( yy ) + " " + to_string ( hh );
}
int main ( ) {
    int n;
    cin >> n;
    vector < vector < int > > ls_xyh;
    for ( int i = 0 ; i < n ; i++ ) {
        vector < int > v;
        for ( int j = 0 ; j < 3 ; j++ ) {
            int x;
            cin >> x;
            v.push_back ( x );
        }
        ls_xyh.push_back ( v );
    }
    cout << solve ( n, ls_xyh ) << endl;
    return 0;
}