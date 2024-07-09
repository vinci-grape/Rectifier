#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    string u;
    int n, k;
    cin >> u >> n >> k;
    int M[n];
    for ( int i = 0; i < n; i++ ) {
        cin >> M[i];
    }
    for ( int j = 0; j < n; j++ ) {
        for ( int p = 0; p < n; p++ ) {
            if ( 0 == M[p] ) {
                cout << p + 1 << " ";
                break;
            }
        }
        for ( int l = p + 1 - k; l < p + 1; l++ ) {
            M[l] -= 1;
        }
        M[p] -= 1;
    }
    return 0;
}