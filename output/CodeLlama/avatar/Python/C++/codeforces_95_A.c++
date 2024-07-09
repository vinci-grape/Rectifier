#include <iostream>
#include <string>
#include <set>
using namespace std;
int main ( ) {
    int pya;
    cin >> pya;
    string arre [ ] = { };
    while ( pya ) {
        pya -= 1;
        cin >> arre [ pya ];
    }
    string oString;
    cin >> oString;
    string lowString = oString;
    transform ( lowString.begin ( ) , lowString.end ( ) , lowString.begin ( ) , ::tolower );
    string letter1;
    cin >> letter1;
    string letter2 = "a" if letter1.lower ( ) != "a" else "b";
    bool valid [ ] = { 0 for i in range ( len ( oString ) ) };
    set < int > setcito;
    for ( string x : arre ) {
        if ( lowString.find ( x ) >= 0 ) {
            int wat = 0;
            while ( true ) {
                int index = lowString.find ( x , wat );
                if ( index < 0 ) {
                    break;
                }
                for ( int i = index ; i < index + x.length ( ) ; i ++ ) {
                    setcito.insert ( i );
                }
                wat = index + 1;
            }
        }
    }
    oString = vector < char > ( oString.begin ( ) , oString.end ( ) );
    for ( int i : setcito ) {
        char letter = letter1 if lowString [ i ] != letter1 else letter2;
        oString [ i ] = letter if oString [ i ] >= 'a' and oString [ i ] <= 'z' else letter.upper ( );
    }
    for ( char x : oString ) {
        cout << x;
    }
    cout << endl;
    return 0;
}