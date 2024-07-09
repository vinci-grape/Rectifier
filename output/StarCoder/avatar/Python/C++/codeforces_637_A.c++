#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map < char, int > w;
    for ( int i = 0 ; i < n ; i++ )
        w [ s [ i ] ]++;
    int c = -1, a = 0;
    for ( auto i : w )
        if ( i.second == max ( w.values ( ) ) )
            if ( s.find ( i.first ) > c ) {
                a = i.first;
                c = s.find ( i.first );
            }
    cout << a;
    return 0;
}