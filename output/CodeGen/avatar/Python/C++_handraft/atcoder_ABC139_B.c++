#include <iostream>
#include <string>
#include <map>
using namespace std;

int main ( ) {
    int a, b ;
    cin >> a >> b ;
    int hole = 1 ;
    int i = 0 ;
    bool check = true ;
    while ( check ) {
        if ( hole >= b ) {
            check = false ;
        }
        else {
            hole = a * ( i + 1 ) - i ;
            i += 1 ;
        }
    }
    cout << i << endl ;
    return 0 ;
}