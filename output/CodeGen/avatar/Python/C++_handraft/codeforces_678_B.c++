#include <iostream>
using namespace std;

int main ( ) {
    int n;
    string d;
    cout << "Enter a year: ";
    cin >> n;
    cout << "Enter a month: ";
    cin >> d;
    if ( n % 400 == 0 or ( n % 4 == 0 and n % 100!= 0 ) ) {
        cout << "Leap year" << endl;
    } else {
        cout << "Not a leap year" << endl;
    }
    while ( true ) {
        if ( n % 400 == 0 or ( n % 4 == 0 and n % 100!= 0 ) ) {
            if ( d == "m" ) {
                d = "w";
                n += 1;
            } else if ( d == "t" ) {
                d = "th";
                n += 1;
            } else if ( d == "w" ) {
                d = "f";
                n += 1;
            } else if ( d == "th" ) {
                d = "sa";
                n += 1;
            } else if ( d == "f" ) {
                d = "s";
                n += 1;
            } else if ( d == "sa" ) {
                d = "m";
                n += 1;
            } else if ( d == "s" ) {
                d = "t";
                n += 1;
            }
        } else {
            if ( d == "m" ) {
                d = "t";
                n += 1;
            } else if ( d == "t" ) {
                d = "w";
                n += 1;
            } else if ( d == "w" ) {
                d = "th";
                n += 1;
            } else if ( d == "th" ) {
                d = "f";
                n += 1;
            } else if ( d == "f" ) {
                d = "sa";
                n += 1;
            } else if ( d == "sa" ) {
                d = "s";
                n += 1;
            } else if ( d == "s" ) {
                d = "m";
                n += 1;
            }
        }
        if ( d == "f" && ( n % 400 == 0 or ( n % 4 == 0 and n % 100!= 0 ) ) && leapyear ( n ) == "y" ) {
            break;
        } else if ( d == "f" && ( n % 400 == 0 or ( n % 4 == 0 and n % 100!= 0 ) ) && leapyear ( n ) == "n" ) {
            break;
        }
    }
    cout << n << endl;
    return 0;
}