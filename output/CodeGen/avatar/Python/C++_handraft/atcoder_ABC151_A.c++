#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int solve ( string c ) {
    char a[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    while ( i < 26 ) {
        if ( a[i] == c[0] ) {
            return a[i+1];
        }
        i++;
    }
    return -1;
}

int main ( ) {
    string c;
    cin >> c;
    cout << solve(c) << endl;
    return 0;
}