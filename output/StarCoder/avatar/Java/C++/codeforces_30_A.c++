#include <bits/stdc++.h> 
using namespace std ; 
int main ( ) { 
    int A, B, n ; 
    cin >> A >> B >> n ; 
    if ( A == 0 ) { 
        if ( B == 0 ) cout << 1 << endl ; 
        else cout << "No solution" << endl ; 
        return 0 ; 
    } 
    if ( B % A!= 0 ) { 
        cout << "No solution" << endl ; return 0 ; 
    } 
    B /= A ; 
    bool neg = B < 0 ; 
    if ( neg && n % 2 == 0 ) { 
        cout << "No solution" << endl ; 
        return 0 ; 
    } 
    if ( neg ) B = - B ; 
    for ( int x = 0 ; x <= B ; x ++ ) { 
        if ( pow ( x, n ) == B ) { 
            cout << ( neg? - x : x ) << endl ; 
            return 0 ; 
        } 
    } 
    cout << "No solution" << endl ;
     return 0 ; 
}