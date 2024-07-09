#include <iostream>
#include <string>
#include <algorithm>
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
    if ( cu > cl ) {
        transform(txt.begin(), txt.end(), txt.begin(), ::toupper);
        cout << txt;
    } else {
        transform(txt.begin(), txt.end(), txt.begin(), ::tolower);
        cout << txt;
    }
    return 0;
}