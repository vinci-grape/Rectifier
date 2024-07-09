#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if ( s.find('0') != string::npos ) {
        cout << n - 1 << endl;
    } else {
        int indices[26];
        for ( int i = 0 ; i < 26 ; i++ ) {
            indices[i] = -1;
        }
        for ( int i = 0 ; i < s.length ( ) ; i++ ) {
            if ( s[i] == '0' ) {
                indices[i] = i;
            }
        }
        if ( indices[0] == -1 ) {
            cout << n << endl;
        } else {
            int maximum = 0;
            int comb[2];
            for ( int i = 0 ; i < 2 ; i++ ) {
                comb[i] = indices[i];
            }
            for ( int i = 0 ; i < 2 ; i++ ) {
                for ( int j = i + 1 ; j < 2 ; j++ ) {
                    maximum = max ( maximum, 2 + 2 * ( abs ( indices[comb[i]] - indices[comb[j]] ) - 1 ) - ( abs ( comb[i] - comb[j] ) - 1 ) );
                }
            }
            cout << s.length ( ) + maximum << endl;
        }
    }
    return 0;
}