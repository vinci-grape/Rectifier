#include <iostream>
using namespace std;
int leapyear ( int n ) {
    if ( n % 400 == 0 or ( n % 4 == 0 and n % 100 != 0 ) ) {
        return 1;
    }
    else {
        return 0;
    }
}
int main () {
    int n;
    cin >> n;
    string d = "f";
    string ans;
    if ( n % 400 == 0 or ( n % 4 == 0 and n % 100 != 0 ) ) {
        ans = "ly";
    }
    else {
        ans = "nly";
    }
    while ( true ) {
        if ( n % 400 == 0 or ( n % 4 == 0 and n % 100 != 0 ) ) {
            if ( d == "m" ) {
                d = "w";
                n += 1;
            }
            else if ( d == "t" ) {
                d = "th";
                n += 1;
            }
            else if ( d == "w" ) {
                d = "f";
                n += 1;
            }
            else if ( d == "th" ) {
                d = "sa";
                n += 1;
            }
            else if ( d == "f" ) {
                d = "s";
                n += 1;
            }
            else if ( d == "sa" ) {
                d = "m";
                n += 1;
            }
            else if ( d == "s" ) {
                d = "t";
                n += 1;
            }
        }
        else {
            if ( d == "m" ) {
                d = "t";
                n += 1;
            }
            else if ( d == "t" ) {
                d = "w";
                n += 1;
            }
            else if ( d == "w" ) {
                d = "th";
                n += 1;
            }
            else if ( d == "th" ) {
                d = "f";
                n += 1;
            }
            else if ( d == "f" ) {
                d = "sa";
                n += 1;
            }
            else if ( d == "sa" ) {
                d = "s";
                n += 1;
            }
            else if ( d == "s" ) {
                d = "m";
                n += 1;
            }
        }
        if ( d == "f" and ans == "ly" and leapyear ( n ) == 1 ) {
            break;
        }
        else if ( d == "f" and ans == "nly" and leapyear ( n ) == 0 ) {
            break;
        }
    }
    cout << n << endl;
    return 0;
}