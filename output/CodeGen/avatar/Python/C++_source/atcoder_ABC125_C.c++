#include <iostream>
#include <cstdlib>
using namespace std;

int gcd ( int a, int b ) {
    if ( b == 0 ) return a;
    return gcd ( b, a % b );
}

int ruiseki_lr ( int array[] ) {
    int op ( int a, int b ) {
        return gcd ( a, b );
    }
    int e = 0;
    int n = sizeof ( array ) / sizeof ( int );
    int left[n + 1];
    int right[n + 1];
    for ( int i = 0 ; i < n ; i++ ) {
        left[i + 1] = op ( left[i], array[i] );
    }
    for ( int i = n - 1 ; i >= 0 ; i-- ) {
        right[i] = op ( right[i + 1], array[i] );
    }
    return left, right;
}

int n;
int a[100];
int left[100 + 1];
int right[100 + 1];

int main ( ) {
    cin >> n;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a[i];
    }
    left, right = ruiseki_lr ( a );
    int ans = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        ans = max ( gcd ( left[i], right[i + 1] ), ans );
    }
    cout << ans << endl;
    return 0;
}