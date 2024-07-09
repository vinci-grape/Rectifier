#include <iostream>
#include <string>
#include <set>
using namespace std;

int main ( ) {
    int N;
    cin >> N;
    int ans = 1;
    if ( N > 100 ) {
        return 0;
    }
    set < string > s;
    s.insert ( "7" );
    s.insert ( "5" );
    s.insert ( "3" );
    for ( int i = 0 ; i < N ; i++ ) {
        string n;
        cin >> n;
        if ( s.count ( n ) ) {
            ans = 0;
            break;
        }
        ans += aaa ( n );
    }
    cout << ans << endl;
    return 0;
}