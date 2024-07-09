#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main ( )
{
    int n;
    cin >> n;
    list <int> l;
    for ( int i = 0 ; i < n ; i++ )
    {
        int a;
        cin >> a;
        l.push_back ( a );
    }
    sort ( l.begin ( ), l.end ( ) );
    for ( list <int>::iterator i = l.begin ( ) ; i!= l.end ( ) ; i++ )
    {
        if ( *i + 1 in l and *i + 2 in l )
        {
            cout << "YES" << endl;
            break;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}