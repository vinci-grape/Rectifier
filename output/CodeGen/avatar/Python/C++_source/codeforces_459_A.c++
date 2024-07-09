#include <iostream>
using namespace std;

int main ( ) {
    int x1, y1, x2, y2, denominator, numerator, quotient, d, x4, x3, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> denominator >> numerator >> quotient;
    if ( denominator!= 0 ) {
        quotient = numerator / denominator;
        if ( numerator == 0 ) {
            d = sqrt( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - y1 ) * ( y2 - y1 ) );
            x3 = x1;
            x4 = x2;
            y3 = y2 + d;
            y4 = y1 + d;
            cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
        } else if ( denominator == 0 ) {
            y4 = y2;
            y3 = y1;
            d = sqrt( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - y1 ) * ( y2 - y1 ) );
            x4 = x1 + d;
            x3 = x2 + d;
            cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
        } else if ( quotient == 1 ) {
            x4 = x2;
            x3 = x1;
            y4 = y1;
            y3 = y2;
            cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
        } else if ( quotient == - 1 ) {
            x4 = x1;
            x3 = x2;
            y4 = y2;
            y3 = y1;
            cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
        } else {
            cout << "-1" << endl;
        }
    } else {
        cout << "-1" << endl;
    }
    return 0;
}