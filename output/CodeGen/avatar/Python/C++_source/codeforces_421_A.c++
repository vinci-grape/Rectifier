#include <iostream>
using namespace std;

int main ( ) {
    int n;
    int a;
    int b;
    cin >> n >> a >> b;
    int lista[n];
    int listb[n];
    for ( int k = 0; k < n; k++ ) {
        cin >> lista[k];
    }
    for ( int k = 0; k < n; k++ ) {
        cin >> listb[k];
    }
    for ( int k = 0; k < n; k++ ) {
        if ( k + 1 in lista ) {
            cout << 1 << " ";
        } else {
            cout << 2 << " ";
        }
    }
    return 0;
}