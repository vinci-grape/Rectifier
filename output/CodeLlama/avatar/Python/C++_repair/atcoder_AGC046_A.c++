#include <iostream>
#include <cmath>
using namespace std;
int gcd ( int a , int b ) {
    return b > 0 ? gcd ( b , a % b ) : a;
}
int main ( ) {
    int x;
    cin >> x;
    cout << 360 / gcd ( 360 , x ) << endl;
    return 0;
}