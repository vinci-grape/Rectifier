#include <iostream>
#include <cstdlib>
using namespace std;
int main ( ) {
    int A[5];
    for ( int i = 0 ; i < 5 ; i++ ) {
        cin >> A[i];
    }
    int N = A[0];
    for ( int i = 1 ; i < 5 ; i++ ) {
        if ( A[i] < A[i-1] ) {
            N = A[i];
        }
    }
    int K = A[4];
    int ans = 0;
    for ( int i = 1 ; i < N ; i++ ) {
        if ( is_possible ( K ) ) {
            ans = i;
        }
        K = K - 1;
    }
    cout << ans << endl;
    return 0;
}