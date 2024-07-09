#include <bits/stdc++.h>
using namespace std;
int main ( )
{
    string S;
    cin >> S;
    map < char, int > c;
    for ( int i = 0; i < S.length ( ); i++ )
        c [ S [ i ] ]++;
    set < char > Sa = set ( S );
    if ( Sa.size ( )!= 2 )
    {
        cout << "No" << endl;
        return 0;
    }
    for ( auto i : Sa )
        if ( c [ i ]!= 2 )
        {
            cout << "No" << endl;
            return 0;
        }
    cout << "Yes" << endl;
    return 0;
}