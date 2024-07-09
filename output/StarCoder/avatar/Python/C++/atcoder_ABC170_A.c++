#include <bits/stdc++.h>
using namespace std;

int main ( )
{
    int a[ ] ;
    for ( int i = 0 ; i < 5 ; i++ )
        cin >> a[ i ] ;
    for ( int i = 0 ; i < 5 ; i++ )
        if ( a[ i ] == 0 )
        {
            cout << i + 1 ;
            break ;
        }
}