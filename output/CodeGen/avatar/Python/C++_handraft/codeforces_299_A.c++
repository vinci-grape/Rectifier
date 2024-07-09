#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;

int main ( ) {
    int num_inp ( );
    int arr_inp ( );
    int sp_inp ( );
    int a [ 100 ];
    sort ( a, a + 100 );
    int b = a [ 0 ];
    int c = - 1;
    for ( int i = 0 ; i < 100 ; i ++ ) {
        if ( a [ i ] % b == 0 ) {
            c = i;
            break;
        }
    }
    cout << c << endl;
    return 0;
}