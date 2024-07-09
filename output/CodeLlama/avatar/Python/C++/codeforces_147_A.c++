#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main ( ) {
    string s;
    cin >> s;
    vector < string > res;
    vector < char > punctuation = { ',' , '.' , '!' , '?' };
    for ( int i = 0 ; i < s.size ( ) ; i ++ ) {
        if ( i >= 1 ) {
            if ( s [ i ] == ' ' ) {
                if ( res [ res.size ( ) - 1 ] != ' ' ) {
                    res.push_back ( s [ i ] );
                }
                else {
                    continue;
                }
            }
            else {
                if ( s [ i ] == ',' || s [ i ] == '.' || s [ i ] == '!' || s [ i ] == '?' ) {
                    if ( res [ res.size ( ) - 1 ] == ' ' ) {
                        res.pop_back ( );
                    }
                    res.push_back ( s [ i ] );
                    res.push_back ( ' ' );
                }
                else {
                    res.push_back ( s [ i ] );
                }
            }
        }
        else {
            if ( s [ i ] == ' ' ) {
                continue;
            }
            if ( s [ i ] == ',' || s [ i ] == '.' || s [ i ] == '!' || s [ i ] == '?' ) {
                continue;
            }
            else {
                res.push_back ( s [ i ] );
            }
        }
    }
    for ( int i = 0 ; i < res.size ( ) ; i ++ ) {
        cout << res [ i ];
    }
    return 0;
}