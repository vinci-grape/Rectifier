#include <bits/stdc++.h>
using namespace std;

const int N = 8000;
const int mod = 998244353;
int g1 [ N + 1 ], g2 [ N + 1 ], inverse [ N + 1 ];

int cmb ( int n, int r, int mod ) {
    if ( r < 0 or r > n ) return 0;
    r = min ( r, n - r );
    return g1 [ n ] * g2 [ r ] % mod * g2 [ n - r ] % mod;
}

int main ( ) {
    int K, N;
    cin >> K >> N;
    g1 [ 0 ] = 1;
    g2 [ 0 ] = 1;
    inverse [ 0 ] = 1;
    for ( int i = 1 ; i <= N ; i ++ ) {
        g1 [ i ] = ( g1 [ i - 1 ] * i ) % mod;
        inverse [ i ] = ( - inverse [ mod % i ] * ( mod / i ) ) % mod;
        g2 [ i ] = ( g2 [ i - 1 ] * inverse [ i - 1 ] ) % mod;
    }
    int ans = 0;
    for ( int i = 0 ; i <= K ; i ++ ) {
        int kumi = ( i + 1 ) / 2;
        for ( int p = 0 ; p <= kumi ; p ++ ) {
            if ( p > N ) break;
            ans += 1LL * ( 1LL << p ) * cmb ( kumi, p, mod ) * kumiawase ( N - p, p + ( K - kumi * 2 - ( i & 1 ) ) );
            if ( i & 1 ) continue;
            if ( N - p - 1 >= 0 ) ans += 1LL * ( 1LL << p ) * cmb ( kumi, p, mod ) * kumiawase ( N - p - 1, p + ( K - kumi * 2 - ( i & 1 ) ) );
        }
    }
    cout << ans % mod << endl;
    return 0;
}