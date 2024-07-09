#include <bits/stdc++.h>
using namespace std;
string run ( string s, string t ) {
    vector <int> ss, tt;
    for ( int i = 0 ; i < s.length ( ) ; i++ ) {
        ss.push_back ( s[i] );
    }
    for ( int i = 0 ; i < t.length ( ) ; i++ ) {
        tt.push_back ( t[i] );
    }
    sort ( ss.begin ( ), ss.end ( ) );
    sort ( tt.begin ( ), tt.end ( ) );
    if ( ss == tt ) {
        return "Yes";
    }
    else {
        return "No";
    }
}
int main ( ) {
    string s, t;
    cin >> s >> t;
    cout << run ( s, t ) << endl;
}