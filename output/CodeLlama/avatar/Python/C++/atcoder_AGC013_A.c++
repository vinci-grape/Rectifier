#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int n;
    cin >> n;
    vector < int > a ( n );
    for ( int i = 0 ; i < n ; i++ ) cin >> a [ i ];
    a = vector < int > ( a.begin ( ) , unique ( a.begin ( ) , a.end ( ) ) );
    n = a.size ( );
    int i = 1;
    int ans = 0;
    while ( i < n - 1 ) {
        if ( a [ i - 1 ] < a [ i ] > a [ i + 1 ] || a [ i - 1 ] > a [ i ] < a [ i + 1 ] ) {
            ans++;
            i++;
        }
        i++;
    }
    cout << ans + 1 << endl;
    return 0;
}