#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main ( ) {
    string s;
    cin >> s;
    int ans = 0;
    for ( int i = 0; i < s.size(); ++i ) {
        if ( s[i] == 'a' ) {
            ans += 1;
        }
        if ( s[i] == 'b' ) {
            ans += 2;
        }
        if ( s[i] == 'c' ) {
            ans += 3;
        }
    }
    cout << ans << endl;
    return 0;
}