#include <iostream>
using namespace std ;
int main ( ) {
    long long pandu , vundu , urdu , c = 0 ;
    cin >> pandu >> vundu >> urdu ;
    for ( int i = 1 ; i <= urdu ; i ++ ) {
        c += i * pandu ;
    }
    if ( c < vundu ) {
        cout << "0" ;
    } else {
        cout << c - vundu ;
    }
}