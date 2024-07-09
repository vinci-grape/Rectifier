#include <iostream>
#include <string>
using namespace std ;
string generateString ( ) { string s = "" ; for ( int i = 1 ; i <= 1000 ; i ++ ) { s += to_string ( i ) ; } return s ; }
int main ( ) { int n ; cin >> n ; cout << generateString ( ) [ n - 1 ] ; }