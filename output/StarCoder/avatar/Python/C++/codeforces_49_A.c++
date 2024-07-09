#include <iostream>
using namespace std;
int main ( ) {
    string a;
    cin >> a;
    string vo = "aeiouAEIOUY";
    for ( int i = a.length ( ) - 1 ; i >= 0 ; i-- ) {
        if ( a [ i ] =='' or a [ i ] == '?' ) {
            continue;
        } else {
            if ( a [ i ] in vo ) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            break;
        }
    }
    return 0;
}