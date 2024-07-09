#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main ( )
{
    string a;
    cin >> a;
    int result = 0;
    if ( a.count ( "1" ) == 0 )
    {
        for ( int i = 0; i < a.size ( ); i++ )
        {
            result += a[i].count ( '0' ) + 1;
        }
    }
    else
    {
        for ( int i = 0; i < a.size ( ); i++ )
        {
            result += ( a[i].count ( '0' ) + 1 ) * ( a[i].count ( '1' ) + 1 );
        }
    }
    cout << result << endl;
    return 0;
}