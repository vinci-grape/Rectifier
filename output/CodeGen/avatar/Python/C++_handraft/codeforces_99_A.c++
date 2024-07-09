#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    string l;
    cin >> l;
    string s = l.substr ( 0, l.find ( '.' ) );
    string p = l.substr ( l.find ( '.' ) + 1 );
    int i = stoi ( p.substr ( 0, p.find ( '9' ) ) );
    if ( s.back ( ) == '9' ) {
        cout << "GOTO Vasilisa." << endl;
    } else if ( s.back ( )!= '9' && i < 5 ) {
        s = s + 1;
        cout << s << endl;
    } else {
        s = s + 1;
        cout << s << endl;
    }
    return 0;
}