#include <iostream>
#include <cmath>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    int x = 1;
    cout << log2 ( n );
    while ( int ( log2 ( n ) ) % 1 ) {
        x += 1;
        n -= 2 * pow ( 2, int ( log2 ( n ) ) );
    }
    cout << x << endl;
    return 0;
}