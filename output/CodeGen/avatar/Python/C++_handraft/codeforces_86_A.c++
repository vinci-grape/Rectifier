#include <iostream>
using namespace std;

int main ( ) {
    int l, r, first, second, ans, curr ;
    cin >> l >> r >> first >> second ;
    curr = r ;
    ans = - 1 ;
    for ( int i = l ; i <= r ; i *= 10 ) {
        int s = 1 ;
        while ( curr /= 10 )
            s += 1 ;
        first = first * s ;
        second = second * s ;
        curr = i ;
        string rev ;
        for ( int k = 9 ; k >= 0 ; --k ) {
            rev += to_string ( 9 - ( curr % 10 ) ) ;
            curr /= 10 ;
        }
        ans = max ( ans, stoi ( rev ) * i ) ;
    }
    cout << ans << endl ;
    return 0 ;
}