#include <iostream>
#include <cstdlib>
using namespace std;

void editorial ( int N, int P[] ) {
    if ( N == 1 ) {
        cout << 0 << endl;
        return ;
    }
    int a[N + 1];
    for ( int i = 0 ; i < N ; i++ ) {
        a[i] = i;
    }
    int tmp = 1;
    int max_len = 1;
    for ( int i = 1 ; i < N ; i++ ) {
        if ( a[i] < a[i + 1] ) {
            tmp += 1;
            max_len = max ( max_len, tmp );
        }
        else {
            tmp = 1;
        }
    }
    int ans = N - max_len;
    cout << ans << endl;
}

int main ( ) {
    int N;
    cin >> N;
    int P[N];
    for ( int i = 0 ; i < N ; i++ ) {
        cin >> P[i];
    }
    editorial ( N, P );
    return 0;
}