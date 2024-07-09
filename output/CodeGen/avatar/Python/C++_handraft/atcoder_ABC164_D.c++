#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main ( ) {
    string s, l;
    int m[100], a, r;
    cin >> s >> l;
    for ( int i = 0 ; i < l ; i++ ) {
        a += s[i] - '0';
        m[a % l]++;
        a %= l;
    }
    r = 0;
    for ( int i = 0 ; i < l ; i++ ) {
        r += m[i] * pow ( 10, i, l );
        m[i] = 0;
    }
    cout << r << endl;
    return 0;
}