#include <bits/stdc++.h>
using namespace std;
int twos_in_factorial ( int n ) {
    return n - __builtin_popcount ( n );
}
bool parity_of_nCr ( int n , int i ) {
    return twos_in_factorial ( n ) - twos_in_factorial ( n - i ) - twos_in_factorial ( i ) > 0;
}
int main ( ) {
    int n;
    cin >> n;
    vector < int > nums;
    string s;
    cin >> s;
    bool no_one = false;
    if ( s.find ( "1" ) == string::npos ) {
        for ( int i = 0 ; i < s.size ( ) ; i++ ) {
            nums.push_back ( s[i] - '0' );
        }
        for ( int i = 0 ; i < nums.size ( ) ; i++ ) {
            nums[i] /= 2;
        }
        no_one = true;
    }
    else {
        for ( int i = 0 ; i < s.size ( ) ; i++ ) {
            nums.push_back ( s[i] - '0' );
        }
    }
    bool is_odd = false;
    for ( int i = 0 ; i < nums.size ( ) ; i++ ) {
        if ( !parity_of_nCr ( n - 1 , i ) && nums[i] & 1 ) {
            is_odd ^= 1;
        }
    }
    if ( !is_odd ) {
        cout << 0 << endl;
    }
    else {
        cout << ( 1 << no_one ) << endl;
    }
    return 0;
}