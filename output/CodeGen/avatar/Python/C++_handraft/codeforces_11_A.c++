#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main ( ) {
    int n, d, x[1000], m, q, i;
    cin >> n >> d;
    for ( i = 0; i < n; i++ ) {
        cin >> x[i];
    }
    for ( i = 0; i < n - 1; i++ ) {
        if ( x[i] >= x[i + 1] ) {
            q = ( x[i] - x[i + 1] ) / d + 1;
            m = m + q;
            x[i + 1] = x[i + 1] + q * d;
        }
    }
    cout << m << endl;
    return 0;
}