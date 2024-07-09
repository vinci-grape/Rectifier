#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map < string , int > w;
    s = s.substr ( 0 , s.length ( ) - 1 );
    stringstream ss ( s );
    string temp;
    while ( ss >> temp ) {
        w [ temp ] ++;
    }
    s = s.substr ( 0 , s.length ( ) - 1 );
    int c = - 1 , a = 0;
    for ( auto i : w ) {
        if ( i.second == max ( w.begin ( ) -> second , w.end ( ) - 1 -> second ) ) {
            if ( s.find ( i.first ) > c ) {
                a = i.first;
                c = s.find ( i.first );
            }
        }
    }
    cout << a << endl;
    return 0;
}