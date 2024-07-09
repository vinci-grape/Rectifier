#include <bits/stdc++.h>
using namespace std;
int main ( )
{
    string s;
    cin >> s;
    map < char, int > dt;
    for ( int i = 0 ; i < s.length ( ) ; i++ )
    {
        dt [ s [ i ] ]++;
    }
    int cnt = 0;
    bool x = true;
    for ( auto key : dt )
    {
        if ( key.second % 2!= 0 and cnt < 1 )
        {
            cnt++;
        }
        else if ( key.second % 2!= 0 and cnt >= 1 )
        {
            x = false;
            break;
        }
    }
    if ( x )
    {
        cout << "First" << endl;
    }
    else if ( not x and s.length ( ) % 2 == 0 )
    {
        cout << "Second" << endl;
    }
    else if ( not x and s.length ( ) % 2!= 0 )
    {
        cout << "First" << endl;
    }
}