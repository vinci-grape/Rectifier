#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    int a, b;
    for ( int i = 0; i < n; i++ ) {
        cin >> a >> b;
        cout << substract ( a, b ) << endl;
    }
    return 0;
}

//substract function
int substract ( int a, int b ) {
    if ( a > b ) {
        int total = 0;
        while ( a > 0 && b > 0 ) {
            total += a / b;
            a = a % b;
            if ( a > 0 ) {
                total += b / a;
                b = b % a;
            }
        }
        return total;
    }
    if ( a < b ) {
        int total = 0;
        while ( a > 0 && b > 0 ) {
            total += b / a;
            b = b % a;
            if ( b > 0 ) {
                total += a / b;
                a = a % b;
            }
        }
        return total;
    }
    if ( a == b ) {
        return 1;
    }
}