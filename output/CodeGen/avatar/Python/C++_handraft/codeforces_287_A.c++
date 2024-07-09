#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector < vector < string > > t ( n );
    for ( int i = 0; i < n; ++i ) {
        int m;
        cin >> m;
        for ( int j = 0; j < m; ++j ) {
            string s;
            cin >> s;
            t[i].push_back ( s );
        }
    }
    int black = 0;
    int white = 0;
    for ( int i = 0; i < n; ++i ) {
        for ( int j = 0; j < n; ++j ) {
            if ( t[i][j] == '#' ) {
                black++;
            } else {
                white++;
            }
            if ( t[i][j + 1] == '#' ) {
                black++;
            } else {
                white++;
            }
            if ( t[i + 1][j] == '#' ) {
                black++;
            } else {
                white++;
            }
            if ( t[i + 1][j + 1] == '#' ) {
                black++;
            } else {
                white++;
            }
        }
    }
    if ( black == 0 || black == 3 || white == 0 || white == 3 || white == 4 || black == 4 ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}