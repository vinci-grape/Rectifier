#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int t [ 4 ] [ 4 ];
    for ( int i = 0 ; i < 4 ; i++ ) {
        for ( int j = 0 ; j < 4 ; j++ ) {
            cin >> t [ i ] [ j ];
        }
    }
    int black = 0, white = 0, correct = 0;
    for ( int i = 0 ; i < 3 ; i++ ) {
        for ( int j = 0 ; j < 3 ; j++ ) {
            if ( t [ i ] [ j ] == '#' ) {
                black++;
            }
            else {
                white++;
            }
            if ( t [ i ] [ j + 1 ] == '#' ) {
                black++;
            }
            else {
                white++;
            }
            if ( t [ i + 1 ] [ j ] == '#' ) {
                black++;
            }
            else {
                white++;
            }
            if ( t [ i + 1 ] [ j + 1 ] == '#' ) {
                black++;
            }
            else {
                white++;
            }
            if ( black == 0 || black == 3 || white == 0 || white == 3 || white == 4 || black == 4 ) {
                correct = 1;
                break;
            }
            black = 0;
            white = 0;
        }
        if ( correct == 1 ) {
            break;
        }
    }
    if ( correct == 1 ) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}