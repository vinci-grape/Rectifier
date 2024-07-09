#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

int N, K;
int A[100];
int main ( ) {
    int i;
    scanf ( "%d%d", &N, &K );
    for ( i = 0 ; i < N ; i ++ ) {
        scanf ( "%d", &A[i] );
    }
    sort ( A, A + N );
    long long ll = -1e18, rr = 1e18, x;
    while ( ll + 1 < rr ) {
        x = ( ll + rr ) / 2;
        long long tot = 0;
        for ( i = 0 ; i < N ; i ++ ) {
            if ( A[i] < 0 ) {
                long long l = -1, r = N ;
                while ( l + 1 < r ) {
                    long long c = ( l + r ) / 2;
                    if ( A[i] * A[c] < x ) {
                        r = c;
                    } else {
                        l = c;
                    }
                }
                tot += N - r;
            } else {
                long long l = -1, r = N ;
                while ( l + 1 < r ) {
                    long long c = ( l + r ) / 2;
                    if ( A[i] * A[c] < x ) {
                        l = c;
                    } else {
                        r = c;
                    }
                }
                tot += r;
            }
            if ( A[i] * A[i] < x ) {
                tot -= 1;
            }
        }
        tot /= 2;
        if ( tot < K ) {
            ll = x;
        } else {
            rr = x;
        }
    }
    printf ( "%lld\n", ll );
    return 0;
}