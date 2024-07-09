#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    string k, n, w ;
    cin >> k >> n >> w ;
    int total = 0 ;
    for ( int i = 1 ; i <= w ; i++ ) {
        total += i * stoi ( k ) ;
    }
    if ( total > stoi ( n ) ) {
        cout << total - stoi ( n ) << endl ;
    } else {
        cout << 0 << endl ;
    }
    return 0 ;
}