#include <iostream>
using namespace std;
int main ( ) {
    int N, X;
    cin >> N >> X;
    int * xs = new int [ N ];
    for ( int i = 0 ; i < N ; i ++ ) {
        cin >> xs [ i ];
    }
    if ( X == 1 || X == N * 2 - 1 ) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
        if ( X == N * 2 - 2 ) {
            for ( int i = 0 ; i < N - 2 ; i ++ ) {
                for ( int j = i + 1 ; j < N - 1 ; j ++ ) {
                    if ( xs [ i ] == xs [ j ] ) {
                        cout << "=" << xs [ i ] << endl;
                        xs [ i ] = 2;
                        xs [ j ] = 2;
                    }
                }
            }
        } else {
            int * ys = new int [ N - 2 ];
            for ( int i = 0 ; i < N - 2 ; i ++ ) {
                ys [ i ] = xs [ i ];
            }
            for ( int i = 0 ; i < N - 2 ; i ++ ) {
                for ( int j = i + 1 ; j < N - 1 ; j ++ ) {
                    if ( xs [ i ] == xs [ j ] ) {
                        cout << "=" << xs [ i ] << endl;
                        xs [ i ] = 2;
                        xs [ j ] = 2;
                    }
                }
            }
            for ( int i = 0 ; i < N - 2 ; i ++ ) {
                for ( int j = i + 1 ; j < N - 1 ; j ++ ) {
                    if ( ys [ i ] == ys [ j ] ) {
                        cout << "=" << ys [ i ] << endl;
                        ys [ i ] = 2;
                        ys [ j ] = 2;
                    }
                }
            }
        }
    }
    delete [] xs;
    delete [] ys;
    return 0;
}