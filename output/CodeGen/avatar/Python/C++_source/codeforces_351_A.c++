#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    double arr[100001], sum, res, o;
    scanf ( "%d", &n );
    for ( int i = 0 ; i < n ; i++ ) {
        scanf ( "%lf", &arr[i] );
    }
    sort ( arr, arr + n );
    o = 2 * n - n;
    sum = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        sum += arr[i];
    }
    res = 2e9;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( i + o >= n ) {
            res = min ( res, abs ( i - sum ) );
        }
    }
    printf ( "%.3f", res );
    return 0;
}