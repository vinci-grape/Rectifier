#include <iostream>
using namespace std;

int main ( )
{
    int n, i, j, k, l, m, p, q, x, y, z, count ;
    int li [ ] ;
    for ( i = 1, j = 1, k = 1, l = 1, m = 1 ; i <= 371 ; i ++, j ++, k ++, l ++, m ++ )
    {
        li [ m - 1 ] = i ;
        count = 0 ;
        while ( i!= 0 )
        {
            i //= 10
            count += 1 ;
        }
        if ( count == 1 )
        {
            cout << li [ m - 1 ] << endl ;
        }
        if ( count == 2 )
        {
            for ( p = 0, q = 0 ; q!= 0 ; p ++, q //= 10 )
            {
                x = q % 10 ;
                q //= 10 ;
                li [ p ] = x ;
            }
            for ( z = 0 ; z < p ; z ++ )
            {
                cout << li [ z ] << " " ;
            }
            cout << endl ;
        }
        if ( count == 3 )
        {
            for ( p = 0, q = 0 ; q!= 0 ; p ++, q //= 10 )
            {
                x = q % 10 ;
                q //= 10 ;
                li [ p ] = x ;
            }
            for ( z = 0 ; z < p ; z ++ )
            {
                cout << li [ z ] << " " ;
            }
            cout << endl ;
        }
    }
    cin >> n ;
    cout << li [ n - 1 ] << endl ;
    return 0 ;
}