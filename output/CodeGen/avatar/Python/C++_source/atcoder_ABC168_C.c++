#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main ( ) {
    int a, b, h, m;
    cin >> a >> b >> h >> m;
    double C = abs ( 360 / 60 * m - 360 / 12 * h - 360 / 12 / 60 * m );
    if ( C > 180 ) {
        C = 360 - C;
    }
    double cosC = cos ( M_PI * C / 180 );
    cout << sqrt ( a * a + b * b - 2 * a * b * cosC ) << endl;
    return 0;
}