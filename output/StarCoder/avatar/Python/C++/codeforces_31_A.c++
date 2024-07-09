#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    int y;
    cin >> y;
    int arr [ y ];
    for ( int i = 0 ; i < y ; i++ ) {
        cin >> arr [ i ];
    }
    for ( int i = 0 ; i < y ; i++ ) {
        for ( int j = 0 ; j < y ; j++ ) {
            if ( i == j ) {
                continue;
            }
            for ( int k = 0 ; k < y ; k++ ) {
                if ( arr [ k ]!= arr [ j ] and arr [ k ]!= arr [ i ] and arr [ k ] == arr [ i ] + arr [ j ] ) {
                    cout << k + 1 << " " << j + 1 << " " << i + 1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << - 1 << endl;
    return 0;
}