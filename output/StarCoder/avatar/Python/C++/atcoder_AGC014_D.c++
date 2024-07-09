#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector < vector < int > > adj ( n + 1 );
    for ( int i = 1; i <= n - 1; i++ ) {
        int a, b;
        cin >> a >> b;
        adj [ a ].push_back ( b );
        adj [ b ].push_back ( a );
    }
    queue < int > que;
    que.push ( 1 );
    vector < int > seen ( n + 1, 0 );
    seen [ 1 ] = 1;
    vector < int > par ( n + 1, 0 );
    vector < int > child_num ( n + 1, 0 );
    while (!que.empty ( ) ) {
        int v = que.front ( );
        que.pop ( );
        for ( int u : adj [ v ] ) {
            if ( seen [ u ] == 0 ) {
                seen [ u ] = 1;
                par [ u ] = v;
                child_num [ v ] += 1;
                que.push ( u );
            }
        }
    }
    queue < int > seq;
    for ( int i = 1; i <= n; i++ ) {
        if ( child_num [ i ] == 0 ) {
            seq.push ( i );
        }
    }
    while (!seq.empty ( ) ) {
        int c = seq.front ( );
        seen [ c ] = 0;
        if ( seen [ par [ c ] ] == 0 ) {
            cout << "First" << endl;
            return 0;
        }
        seen [ par [ c ] ] = 0;
        child_num [ par [ par [ c ] ] ] -= 1;
        if ( child_num [ par [ par [ c ] ] ] == 0 ) {
            seq.push ( par [ par [ c ] ] );
        }
    }
    cout << "Second" << endl;
    return 0;
}