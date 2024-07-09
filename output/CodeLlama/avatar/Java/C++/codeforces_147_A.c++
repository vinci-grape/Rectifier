#include <bits/stdc++.h>
using namespace std;

bool isLatinLetter ( char c ) {
    return c >= 'a' && c <= 'z' ;
}

bool isPunctuation ( char c ) {
    if ( c == '.' ) return true ;
    if ( c == ',' ) return true ;
    if ( c == '!' ) return true ;
    if ( c == '?' ) return true ;
    return false ;
}

int main ( ) {
    string s ;
    cin >> s ;
    stringstream ss ;
    ss << s.charAt ( 0 ) ;
    int n = s.length ( ) ;
    for ( int i = 1 ; i < n ; i ++ ) {
        char c = s.charAt ( i ) ;
        if ( isLatinLetter ( c ) ) {
            if ( ! isLatinLetter ( s.charAt ( i - 1 ) ) ) {
                ss << ' ' ;
            }
            ss << c ;
        } else if ( isPunctuation ( c ) ) {
            ss << c ;
        }
    }
    cout << ss.str ( ) << endl ;
}