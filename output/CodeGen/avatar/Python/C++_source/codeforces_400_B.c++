#include <iostream>
#include <string>
#include <set>
using namespace std;

int main ( ) {
    int n, m;
    cin >> n >> m;
    set < int > c;
    for ( int i = 0 ; i < n ; i++ ) {
        string s;
        cin >> s;
        for ( int j = 0 ; j < m ; j++ ) {
            if ( s[j] == 'S' ) {
                c.insert ( j );
            }
        }
    }
    int ans = - 1;
    if ( any ( a < 0 for a in c ) ) {
        ans = 0;
    } else {
        ans = c.size ( );
    }
    cout << ans << endl;
    return 0;
}