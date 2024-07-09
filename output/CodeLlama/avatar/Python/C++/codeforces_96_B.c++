#include <bits/stdc++.h>
using namespace std;
vector <int> l;
int limit = 10000000000;
void gen ( int number , int four , int seven ) {
    if ( number > limit ) return;
    if ( number > 0 and four == seven ) {
        l.push_back ( number );
    }
    gen ( number * 10 + 4 , four + 1 , seven );
    gen ( number * 10 + 7 , four , seven + 1 );
}
int main ( ) {
    gen ( 0 , 0 , 0 );
    sort ( l.begin ( ) , l.end ( ) );
    int n;
    cin >> n;
    int ans = 0;
    for ( int val : l ) {
        if ( val >= n ) {
            ans = val;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}