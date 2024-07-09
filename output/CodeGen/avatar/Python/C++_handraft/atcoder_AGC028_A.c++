#include <iostream>
#include <cstdlib>
using namespace std;
int main ( ) {
    int N, M, i, j, Kaburi_Size, counter, Flag ;
    cin >> N >> M ;
    string S, T ;
    cin >> S >> T ;
    int *Number_i = new int [ N ] ;
    int *Number_iMN = new int [ N ] ;
    for ( i = 0 ; i < N ; i++ ) {
        Number_i [ i ] = i ;
        Number_iMN [ i ] = i * M / N ;
    }
    int *Number_j = new int [ M ] ;
    Kaburi_Size = 0 ;
    for ( i = 0 ; i < M ; i++ ) {
        Number_j [ i ] = i ;
        for ( j = 0 ; j < N ; j++ ) {
            if ( S [ Number_i [ j ] ] == T [ Number_j [ i ] ] ) {
                break ;
            }
        }
        if ( j == N ) {
            Kaburi_Size += 1 ;
            Number_iMN [ Kaburi_Size - 1 ] = Number_iMN [ Kaburi_Size - 2 ] + M / N ;
        }
    }
    counter = 0 ;
    Flag = 0 ;
    while ( counter <= Kaburi_Size - 1 ) {
        if ( S [ Number_i [ counter ] ] == T [ Number_j [ counter ] ] ) {
            // pass ;
        }
        else {
            Flag = 1 ;
            break ;
        }
        counter += 1 ;
    }
    if ( Flag == 1 ) {
        cout << - 1 ;
    }
    else {
        cout << Number_iMN [ Kaburi_Size - 1 ] / M ;
    }
    delete [] Number_i ;
    delete [] Number_iMN ;
    delete [] Number_j ;
    return 0 ;
}