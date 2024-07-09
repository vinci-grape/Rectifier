#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iterator>
#include <string>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n, m;
    cin >> n >> m;
    vector < vector < int > > li ( m );
    for ( int i = 0 ; i < m ; ++i ) {
        int n, m;
        cin >> n >> m;
        li[i].resize ( n );
        for ( int j = 0 ; j < n ; ++j ) {
            cin >> li[i][j];
        }
    }
    int p[3];
    cin >> p[0] >> p[1] >> p[2];
    set < int > q;
    for ( int i = 0 ; i < m ; ++i ) {
        q.insert ( sum ( li[i], vector < int > ( 0 ) ) );
    }
    set < int > r;
    for ( int i = 1 ; i <= n ; ++i ) {
        r.insert ( i );
    }
    vector < int > v ( r.size ( ) );
    copy ( r.begin ( ), r.end ( ), v.begin ( ) );
    sort ( v.begin ( ), v.end ( ) );
    int ans = 0;
    for ( int i = 0 ; i < v.size ( ) ; ++i ) {
        for ( int j = 0 ; j < v.size ( ) - i ; ++j ) {
            set < int > s;
            for ( int k = 0 ; k < m ; ++k ) {
                s.insert ( sum ( li[k], vector < int > ( 0 ) ) );
            }
            if ( s.size ( ) == q.size ( ) ) {
                set < int > t;
                for ( int k = 0 ; k < m ; ++k ) {
                    t.insert ( sum ( li[k], vector < int > ( 0 ) ) );
                }
                if ( t == q ) {
                    ans += 2 << i;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}