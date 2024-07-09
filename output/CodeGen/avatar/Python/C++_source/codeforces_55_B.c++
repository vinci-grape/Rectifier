#include <iostream>
#include <cstdlib>
using namespace std;

void rememberTheNumber ( int nums [ 4 ], int i, char operations [ 3 ], int ans [ 1 ] ) {
    if ( i >= 3 ) {
        return;
    }
    for ( int j = 0 ; j < 4 ; ++ j ) {
        for ( int k = j + 1 ; k < 4 ; ++ k ) {
            if ( nums [ j ]!= - 1 && nums [ k ]!= - 1 ) {
                int s = nums [ j ];
                nums [ j ] = - 1;
                int t = nums [ k ];
                if ( operations [ i ] == '+' ) {
                    nums [ k ] = s + t;
                } else if ( operations [ i ] == '*' ) {
                    nums [ k ] = s * t;
                }
                if ( i == 2 && nums [ k ] < ans [ 0 ] ) {
                    ans [ 0 ] = nums [ k ];
                }
                rememberTheNumber ( nums, i + 1, operations, ans );
                nums [ j ] = s;
                nums [ k ] = t;
            }
        }
    }
}

int main ( ) {
    int nums [ 4 ] = { - 1, - 1, - 1, - 1 }, i = 0, operations [ 3 ] = { '+', '*', '+' }, ans [ 1 ] = 10000000000000000000000000 ;
    rememberTheNumber ( nums, i, operations, ans );
    cout << ans [ 0 ] << endl;
    return 0;
}