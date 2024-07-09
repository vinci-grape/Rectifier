#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    string txt;
    cin >> txt;
    int cu = 0;
    int cl = 0;
    for ( int i = 0; i < txt.size ( ); i++ ) {
        if ( txt[i].isLower ( ) ) {
            cl++;
        } else {
            cu++;
        }
    }
    if ( cu > cl ) {
        string out = txt.upper ( );
        cout << out << endl;
    } else {
        string out = txt.lower ( );
        cout << out << endl;
    }
    return 0;
}