#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int X;
    bool prime[100010] = { true };
    prime[0] = false;
    prime[1] = false;
    for ( int i = 4; i < 100010; i += 2 ) {
        prime[i] = false;
    }
    int i = 3;
    while ( i * i <= 100008 ) {
        if ( prime[i] ) {
            for ( int j = i + i; j < 100008; j += i ) {
                prime[j] = false;
            }
        }
        i += 2;
    }
    for ( int i = 0; i < 100008; ++i ) {
        if ( prime[i] ) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}