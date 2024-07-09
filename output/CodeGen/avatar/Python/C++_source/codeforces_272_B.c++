#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    int *sequence = new int [ n ];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> sequence [ i ];
    }
    int result = nPairsWithCommonFX ( sequence, n );
    cout << result << endl;
    delete [] sequence;
    return 0;
}

int nPairsWithCommonFX ( int *sequence, int n ) {
    int storage [ n ];
    int FXs [ n ];
    for ( int i = 0 ; i < n ; i++ ) {
        int y = f ( sequence [ i ] );
        if ( y not in storage ) {
            storage [ y ] = [ sequence [ i ] ];
            FXs [ i ] = y;
        } else {
            storage [ y ].append ( sequence [ i ] );
        }
    }
    int result = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        result += len ( storage [ FXs [ i ] ] ) * len ( storage [ FXs [ i ] ] );
    }
    result -= n;
    result /= 2;
    return result;
}

int f ( int n ) {
    int y = 1;
    while ( n!= 1 ) {
        if ( n % 2 ) {
            y += 1;
        }
        n /= 2;
    }
    return y;
}