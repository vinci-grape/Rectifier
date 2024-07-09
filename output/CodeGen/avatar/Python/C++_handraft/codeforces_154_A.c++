#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main ( ) {
    string s;
    int n;
    cin >> s >> n;
    int ans = 0;
    int a = 0, b = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        string x;
        cin >> x;
        a = 0, b = 0;
        for ( int j = 0 ; j < s.length ( ) ; j++ ) {
            if ( s[j] == x[0] ) {
                a += 1;
            } else if ( s[j] == x[1] ) {
                b += 1;
            }
        }
        ans = ans + min ( a, b );
        a = 0;
        b = 0;
    }
    ans = ans + min ( a, b );
    cout << ans << endl;
    return 0;
}