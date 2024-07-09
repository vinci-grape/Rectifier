#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n, k ;
    cin >> n >> k ;
    string s ;
    cin >> s ;
    vector <int> count ( 26, 0 ) ;
    for ( int i = 0 ; i < s.size ( ) ; i++ ) {
        count [ s[i] - 'A' ] ++ ;
    }
    sort ( count.begin ( ), count.end ( ), greater <int> ( ) ) ;
    int res = 0 ;
    for ( int i = 0 ; i < 26 ; i++ ) {
        if ( count [ i ] >= k ) {
            res += k * k ;
            cout << res << endl ;
            return 0 ;
        }
        k -= count [ i ] ;
        res += count [ i ] * count [ i ] ;
    }
    cout << res << endl ;
    return 0 ;
}