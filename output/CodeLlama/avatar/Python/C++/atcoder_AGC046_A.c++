#include <iostream>
#include <cmath>
using namespace std;
int main ( ) {
    int x;
    cin >> x;
    cout << 360 / gcd ( 360 , x ) << endl;
    return 0;
}