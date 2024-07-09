#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    string s;
    cin >> s;
    string my_str = "";
    for ( int i = 0; i < s.size ( ); i++ ) {
        if ( s[i] == '0' || s[i] == '1' ) {
            my_str += s[i];
        } else if ( s[i] == 'B' && my_str.size ( )!= 0 ) {
            my_str = my_str.substr ( 0, my_str.size ( ) - 1 );
        }
    }
    cout << my_str << endl;
    return 0;
}