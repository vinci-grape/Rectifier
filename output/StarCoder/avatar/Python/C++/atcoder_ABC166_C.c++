#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int n, m;
    cin >> n >> m;
    vector < int > p ( n + 1 );
    for ( int i = 1 ; i <= n ; i++ )
        p [ i ] = i;
    map < int, int > hp;
    for ( int i = 1 ; i <= n ; i++ ) {
        int x;
        cin >> x;
        hp [ p [ i ] ] = x;
    }
    map < int, vector < int > > path;
    for ( int i = 1 ; i <= m ; i++ ) {
        int a, b;
        cin >> a >> b;
        path [ a ].push_back ( b );
        path [ b ].push_back ( a );
    }
    int c = 0;
    for ( auto i : path ) {
        int f = 0;
        for ( auto j : i.second )
            if ( hp [ i.first ] <= hp [ j ] ) {
                f = 1;
                break;
            }
        if ( f == 0 )
            c++;
    }
    cout << c << endl;
    return 0;
}