#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main ( ) {
    int A, B ;
    cin >> A >> B ;
    int ans = A - 2 * B ;
    if ( ans < 0 ) {
        ans = 0 ;
    }
    cout << ans << endl ;
    return 0 ;
}