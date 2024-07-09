#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int limit = 10000000000;
    int four = 0;
    int seven = 0;
    int number = 0;
    int val = 0;
    int ans = 0;
    for ( number = 0 ; number <= limit ; number ++ ) {
        if ( number > 0 and four == seven ) {
            ans = number;
            break;
        }
        if ( number > 0 and four < seven ) {
            four ++;
        }
        if ( number > 0 and four > seven ) {
            seven ++;
        }
        if ( number > 0 and four == seven ) {
            four ++;
        }
        if ( number > 0 and four > seven ) {
            seven ++;
        }
    }
    cout << ans << endl;
    return 0;
}