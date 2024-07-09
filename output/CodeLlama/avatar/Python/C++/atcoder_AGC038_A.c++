#include <iostream>
#include <string>
using namespace std;
void solve ( int H , int W , int A , int B ) {
    string answer [ H ] [ W ];
    for ( int i = 0 ; i < H ; i ++ ) {
        for ( int j = 0 ; j < W ; j ++ ) {
            if ( i < B ) {
                if ( j < A ) {
                    answer [ i ] [ j ] = "0";
                } else {
                    answer [ i ] [ j ] = "1";
                }
            } else {
                if ( j < A ) {
                    answer [ i ] [ j ] = "1";
                } else {
                    answer [ i ] [ j ] = "0";
                }
            }
        }
    }
    for ( int i = 0 ; i < H ; i ++ ) {
        for ( int j = 0 ; j < W ; j ++ ) {
            cout << answer [ i ] [ j ];
        }
        cout << endl;
    }
}
int main ( ) {
    int H , W , A , B;
    cin >> H >> W >> A >> B;
    solve ( H , W , A , B );
    return 0;
}