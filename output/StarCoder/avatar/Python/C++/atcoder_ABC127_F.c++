#include <bits/stdc++.h>
using namespace std;
int main ( )
{
    int q;
    cin >> q;
    vector < int > ans ( 2, 0 );
    vector < int > p1;
    vector < int > p2;
    for ( int i = 0 ; i < q ; i ++ )
    {
        int ql [ 3 ];
        cin >> ql [ 0 ] >> ql [ 1 ] >> ql [ 2 ];
        if ( ql [ 0 ] == 2 )
        {
            if ( p1.size ( ) == p2.size ( ) )
            {
                ans [ 0 ] = - p2 [ 0 ];
                ans [ 1 ] = ( sum ( p1 ) - p1.size ( ) * p2 [ 0 ] + p2.size ( ) * p2 [ 0 ] - sum ( p2 ) + sum ( ans ) );
            }
            else
            {
                ans [ 0 ] = p1 [ 0 ];
                ans [ 1 ] = ( sum ( p1 ) - p1.size ( ) * p1 [ 0 ] + p2.size ( ) * p1 [ 0 ] - sum ( p2 ) + sum ( ans ) );
            }
            cout << ans [ 0 ] << " " << ans [ 1 ] << endl;
        }
        else
        {
            ans [ 1 ] += ql [ 2 ];
            if ( p1.size ( ) == 0 )
            {
                p1.push_back ( ql [ 1 ] );
            }
            else if ( p1 [ 0 ] <= ql [ 1 ] )
            {
                p1.push_back ( ql [ 1 ] );
            }
            else
            {
                p2.push_back ( - ql [ 1 ] );
            }
            if ( p1.size ( ) < p2.size ( ) )
            {
                int k = p2 [ 0 ];
                p2.erase ( p2.begin ( ) );
                p1.push_back ( - k );
            }
            if ( p1.size ( ) - 1 > p2.size ( ) )
            {
                int k = p1 [ 0 ];
                p1.erase ( p1.begin ( ) );
                p2.push_back ( - k );
            }
        }
    }
    return 0;
}