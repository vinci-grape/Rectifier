#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    int nums[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> nums[i];
    }
    int no_one = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( nums[i] % 2 == 1 ) {
            no_one = 1;
        }
    }
    int is_odd = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( nums[i] % 2 == 1 ) {
            is_odd = 1;
        }
    }
    if (!is_odd ) {
        cout << 0;
    } else {
        cout << 1 << ( no_one? "0" : "1" );
    }
    return 0;
}