#include <bits/stdc++.h>
using namespace std;

int sum ( int k ) {
    int ret = 0, pw = 10, len = 1;
    while ( 1 ) {
        int cur = min ( pw - 1, k );
        int prev = pw / 10;
        ret += ( cur - prev + 1 ) * len;
        if ( pw - 1 >= k ) break;
        len += 1;
        pw *= 10;
    }
    return ret;
}

int main() {
    int w, m, k;
    cin >> w >> m >> k;
    int lo = 0, hi = 1e18;
    while ( hi - lo > 1 ) {
        int md = ( lo + hi ) / 2;
        int c = sum ( m + md - 1 ) - sum ( m - 1 );
        if ( c * k <= w ) lo = md;
        else hi = md;
    }
    cout << lo << endl;
    return 0;
}