#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <string> s(n);
    for ( int i = 0; i < n; ++i ) {
        cin >> s[i];
    }
    vector <string> t(n);
    for ( int i = 0; i < n; ++i ) {
        cin >> t[i];
    }
    if ( s == t ) {
        cout << n << endl;
    } else {
        int cnt = 0;
        for ( int i = 0; i < n; ++i ) {
            for ( int j = 0; j < n - i; ++j ) {
                if ( s[i + j]!= t[j] ) {
                    break;
                }
                if ( j == n - i - 1 ) {
                    cnt = n - i;
                }
            }
        }
        cout << 2 * n - cnt << endl;
    }
    return 0;
}