#include <iostream>
using namespace std;

int main ( ) {
    int n, m ;
    cin >> n >> m ;
    if ( n < 1 ) {
        if ( m < 1 ) {
            cout << n << " " << m << endl ;
            return 0 ;
        }
        cout << "Impossible" << endl ;
        return 0 ;
    }
    if ( m > n ) {
        int min = m ;
        int max = n + m - 1 ;
        cout << min << " " << max << endl ;
    } else {
        int min = n ;
        int max = n + m - 1 ;
        if ( m == 0 )
            max = n ;
        cout << min << " " << max << endl ;
    }
    return 0 ;
}