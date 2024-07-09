#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> ii;
#define inf 1e9

int main () {
    ios_base::sync_with_stdio ( false );
    cin.tie ( 0 );
    int n;
    cin >> n;
    vector <vi> ls_xyh ( n , vi ( 3 ) );
    for ( int i = 0 ; i < n ; i ++ ) cin >> ls_xyh [ i ] [ 0 ] >> ls_xyh [ i ] [ 1 ] >> ls_xyh [ i ] [ 2 ];
    int x0 = 0;
    for ( int i = 0 ; i < n ; i ++ ) if ( ls_xyh [ i ] [ 2 ] > 0 ) {
        x0 = ls_xyh [ i ] [ 0 ];
        break;
    }
    vector <vi> cands;
    for ( int cx = 0 ; cx < 101 ; cx ++ ) for ( int cy = 0 ; cy < 101 ; cy ++ ) cands.push_back ( vi ( 3 ) );
    for ( int i = 0 ; i < n ; i ++ ) {
        int x = ls_xyh [ i ] [ 0 ];
        int y = ls_xyh [ i ] [ 1 ];
        int h = ls_xyh [ i ] [ 2 ];
        for ( int j = 0 ; j < cands.size ( ) ; j ++ ) {
            int cx = cands [ j ] [ 0 ];
            int cy = cands [ j ] [ 1 ];
            int ch = cands [ j ] [ 2 ];
            if ( max ( ch - abs ( cx - x ) - abs ( cy - y ) , 0 ) == h ) {
                cands [ j ] [ 0 ] = cx;
                cands [ j ] [ 1 ] = cy;
                cands [ j ] [ 2 ] = ch;
            }
        }
    }
    int xx = cands [ 0 ] [ 0 ];
    int yy = cands [ 0 ] [ 1 ];
    int hh = cands [ 0 ] [ 2 ];
    cout << xx << ' ' << yy << ' ' << hh << '\n';
    return 0;
}