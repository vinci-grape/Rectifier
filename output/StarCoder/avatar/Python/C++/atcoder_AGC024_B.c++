#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int N;
    cin >> N;
    vector < int > P ( N );
    for ( int i = 0 ; i < N ; i++ )
        cin >> P [ i ];
    int ans = 0, tmp = 0;
    for ( int i = 0 ; i < N ; i++ ) {
        if ( i == 0 || P [ i - 1 ] + 1 == P [ i ] )
            tmp++;
        else {
            ans = max ( ans, tmp );
            tmp = 1;
        }
    }
    cout << N - ans << endl;
    return 0;
}