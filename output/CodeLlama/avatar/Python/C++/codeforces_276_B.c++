#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    string s;
    cin >> s;
    map < char , int > dt;
    for ( int i = 0 ; i < s.length ( ) ; i++ ) {
        if ( dt.find ( s [ i ] ) != dt.end ( ) ) {
            dt [ s [ i ] ]++;
        }
        else {
            dt [ s [ i ] ] = 1;
        }
    }
    int cnt = 0;
    bool x = true;
    for ( auto it : dt ) {
        if ( it.second % 2 != 0 && cnt < 1 ) {
            cnt++;
        }
        else if ( it.second % 2 != 0 && cnt >= 1 ) {
            x = false;
            break;
        }
    }
    if ( x ) {
        cout << "First";
    }
    else if ( !x && s.length ( ) % 2 == 0 ) {
        cout << "Second";
    }
    else if ( !x && s.length ( ) % 2 != 0 ) {
        cout << "First";
    }
    return 0;
}