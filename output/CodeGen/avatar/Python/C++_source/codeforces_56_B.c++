#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int maxn = 1005;
int N;
int A[maxn];
int mn, mx;

int main ( ) {
    cin >> N;
    for ( int i = 0; i < N; i++ ) {
        cin >> A[i];
    }
    mn = mx = N + 1;
    for ( int i = 0; i < N; i++ ) {
        if ( i + 1!= A[i] ) {
            mn = min(mn, i);
            mx = max(mx, i);
        }
    }
    if ( mx == - 1 ) {
        cout << "0 0" << endl;
    } else {
        cout << mn + 1 << " " << mx + 1 << endl;
    }
    return 0;
}