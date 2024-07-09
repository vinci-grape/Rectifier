#include <iostream>
using namespace std;

int main ( ) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int x = 1;
    while ( log2 ( n ) % 1 ) {
        x += 1;
        n -= 2 * pow ( 2, log2 ( n ) );
    }
    cout << x << endl;
    return 0;
}