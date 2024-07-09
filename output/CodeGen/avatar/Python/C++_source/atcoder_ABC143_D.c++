#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 100005;
int n, * l, ans;

int main ( ) {
    scanf ( "%d", &n );
    l = ( int * ) malloc ( n * sizeof ( int ) );
    for ( int i = 0 ; i < n ; i++ ) {
        scanf ( "%d", &l[i] );
    }
    sort ( l, l + n );
    ans = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = i + 1 ; j < n ; j++ ) {
            int a = l[i];
            int b = l[j];
            int right = lower_bound ( l, l + n, a + b ) - l;
            int left = upper_bound ( l, l + n, max ( a - b, b - a ) ) - l;
            int tmp = max ( 0, right - left ) - 2;
            if ( left <= i && i < right ) tmp -= 1;
            if ( left <= j && j < right ) tmp -= 1;
            ans += tmp;
        }
    }
    printf ( "%d", ans / 3 );
    return 0;
}