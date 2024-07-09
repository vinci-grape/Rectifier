#include <iostream>
#include <string>
using namespace std;
int main ( )
{
    string txt;
    cin >> txt;
    int cu = 0;
    int cl = 0;
    for ( int i = 0; i < txt.length ( ); i++ )
    {
        if ( txt [ i ] >= 'a' && txt [ i ] <= 'z' )
            cl++;
        else
            cu++;
    }
    if ( cu > cl )
        cout << txt.uppercase ( );
    else
        cout << txt.lowercase ( );
    return 0;
}