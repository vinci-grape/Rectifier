#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main ( ) {
    int candeleIntere, b ;
    cin >> candeleIntere >> b ;
    int s = 0 ;
    int restoSciolte = 0 ;
    while ( candeleIntere > 0 || restoSciolte >= b ) {
        candeleIntere += restoSciolte / b ;
        restoSciolte %= b ;
        s += candeleIntere ;
        restoSciolte += candeleIntere % b ;
        candeleIntere /= b ;
    }
    cout << s << endl ;
    return 0 ;
}