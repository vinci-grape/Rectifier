#include <iostream>
#include <string>
using namespace std;

void solve ( string S, string T, int A, int B, string U ) {
    if ( S == U ) {
        A -= 1;
    }
    if ( T == U ) {
        B -= 1;
    }
    cout << A << " " << B << endl;
}

int main ( ) {
    string S, T, U ;
    cin >> S >> T >> A >> B >> U ;
    solve ( S, T, A, B, U ) ;
    return 0 ;
}