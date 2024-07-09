#include <iostream>
using namespace std;

int main ( ) {
    char ip [ ] = "";
    int i = 0;
    int st = 0;
    while ( i < 1 ) {
        cin >> ip;
        if ( ip [ 0 ] == '9' ) {
            st = 9 - atoi ( ip + 1 );
            ip = ip [ 1 : ];
        }
        for ( i = 0 ; i < 1 ; i++ ) {
            if ( st > 4 ) {
                st = st - 9;
            } else {
                st = st + atoi ( ip );
                ip = ip [ 1 : ];
            }
        }
    }
    cout << st;
    return 0;
}