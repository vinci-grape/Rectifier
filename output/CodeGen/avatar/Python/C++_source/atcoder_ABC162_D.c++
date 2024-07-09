#include <iostream>
#include <string>
using namespace std;
int main ( ) {
    int N;
    string S;
    cin >> N >> S;
    int rNum = S.count ( "R" );
    int gNum = S.count ( "G" );
    int bNum = S.count ( "B" );
    int sum = 0;
    for ( int step = 1 ; step <= ( N - 2 ) / 2 ; step++ ) {
        for ( int i = N - 2 * step ; i < N ; i++ ) {
            string s = S.substr ( i, step ) + S.substr ( i + step, step ) + S.substr ( i + step * 2, step );
            if ( s == "RGB" || s == "RBG" || s == "BGR" || s == "BRG" || s == "GBR" || s == "GRB" ) {
                sum = sum + 1;
            }
        }
    }
    cout << rNum * gNum * bNum - sum << endl;
    return 0;
}