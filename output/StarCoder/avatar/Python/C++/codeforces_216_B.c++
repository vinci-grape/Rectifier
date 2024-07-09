#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int n, m;
    cin >> n >> m;
    vector < vector < int > > g ( n + 1 );
    for ( int i = 0; i < m; i++ ) {
        int a, b;
        cin >> a >> b;
        g [ a ].push_back ( b );
        g [ b ].push_back ( a );
    }
    int ans = 0;
    for ( int i = 1; i <= n; i++ ) {
        if ( g [ i ].size ( ) == 0 ) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}