#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

int main ( int argc, char *argv [ ] ) {
    int n;
    int a[100];
    int pre;
    int ans;
    scanf ( "%d", &n );
    for ( int i = 0 ; i < n ; i ++ ) {
        scanf ( "%d", &a[i] );
    }
    sort ( a, a + n, greater<int> ( ) );
    pre = 0;
    ans = 0;
    for ( int i = 0 ; i < n ; i ++ ) {
        ans += max ( 0, min ( pre - 1, a[i] ) );
        pre = max ( 0, min ( pre - 1, a[i] ) );
    }
    printf ( "%d", ans );
    return 0;
}