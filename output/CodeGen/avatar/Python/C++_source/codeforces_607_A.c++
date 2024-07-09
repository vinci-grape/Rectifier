#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    int l[1000010];
    for ( int i = 0 ; i < n ; i++ ) {
        int a, b;
        cin >> a >> b;
        l[a] = b;
    }
    if ( l[0] > 0 ) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    for ( int i = 1 ; i < 1000010 ; i++ ) {
        if ( l[i] == 0 ) {
            cout << dp[i-1] << endl;
        } else {
            if ( l[i] >= i ) {
                cout << 1 << endl;
            } else {
                cout << dp[i-l[i]-1] + 1 << endl;
            }
        }
    }
    return 0;
}