#include <iostream>
#include <string>
#include <map>
using namespace std;

int main ( ) {
    int h1, m1, h2, m2 ;
    cin >> h1 >> m1 >> h2 >> m2 ;
    m1 -= m2 ;
    m1 %= 60 ;
    cout << ( m1 < 0? m1 + 60 : m1 ) << ":" << ( m1 < 0? m1 + 60 : m1 ) << endl ;
    return 0 ;
}