#include <bits/stdc++.h>
using namespace std;
int gcd ( int a , int b ) {
    if ( b == 0 ) return a;
    return gcd ( b , a % b );
}
vector < int > ruiseki_lr ( vector < int > array ) {
    auto op = [ ] ( int a , int b ) { return gcd ( a , b ); };
    int e = 0;
    int n = array.size ( );
    vector < int > left ( n + 1 , e );
    vector < int > right ( n + 1 , e );
    for ( int i = 0 ; i < n ; i ++ ) {
        left [ i + 1 ] = op ( left [ i ] , array [ i ] );
    }
    for ( int i = n - 1 ; i >= 0 ; i -- ) {
        right [ i ] = op ( right [ i + 1 ] , array [ i ] );
    }
    return { left , right };
}
int main ( ) {
    int n;
    cin >> n;
    vector < int > a ( n );
    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> a [ i ];
    }
    auto [ left , right ] = ruiseki_lr ( a );
    int ans = 0;
    for ( int i = 0 ; i < n ; i ++ ) {
        ans = max ( gcd ( left [ i ] , right [ i + 1 ] ) , ans );
    }
    cout << ans << endl;
}