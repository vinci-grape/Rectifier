#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    ios::sync_with_stdio ( false );
    cin.tie ( NULL );
    int N , M;
    cin >> N >> M;
    vector < pair < int , int > > balls ( N , make_pair ( 0 , 0 ) );
    balls [ 0 ] = make_pair ( 1 , 1 );
    for ( int i = 0 ; i < M ; i++ ) {
        int x , y;
        cin >> x >> y;
        int w_x = balls [ x - 1 ].first , r_x = balls [ x - 1 ].second;
        int w_y = balls [ y - 1 ].first , r_y = balls [ y - 1 ].second;
        if ( w_x >= 1 && r_x >= 1 ) {
            balls [ x - 1 ].first -= 1;
            balls [ y - 1 ].second += 1;
        } else if ( w_x == 0 ) {
            balls [ x - 1 ].first -= 1;
            balls [ y - 1 ].second += 1;
        } else {
            balls [ x - 1 ].second -= 1;
            balls [ y - 1 ].first += 1;
        }
    }
    int ans = 0;
    for ( int i = 0 ; i < N ; i++ ) {
        if ( balls [ i ].second ) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}