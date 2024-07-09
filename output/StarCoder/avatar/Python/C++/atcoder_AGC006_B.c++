#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int N, X;
    cin >> N >> X;
    if ( X == 1 || X == N * 2 - 1 ) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
        if ( X == N * 2 - 2 ) {
            for ( int i = 1 ; i <= N - 1 ; i ++ ) {
                cout << i << " ";
            }
            for ( int i = N - 1 ; i >= 1 ; i -- ) {
                cout << i << " ";
            }
        } else {
            for ( int i = 1 ; i <= X - 1 ; i ++ ) {
                cout << i << " ";
            }
            cout << X + 2 << " " << X - 1 << " " << X << " " << X + 1;
            for ( int i = X + 3 ; i <= N * 2 ; i ++ ) {
                cout << " " << i;
            }
        }
    }
    return 0;
}