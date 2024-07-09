#include <iostream>
#include <string>
#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cassert>
using namespace std;

int main ( ) {
    string s;
    cin >> s;
    int len = s.length();
    int a = 0, b = 0;
    for ( int i = 0; i < len; i++ ) {
        if ( s[i] == '0' ) {
            a++;
        } else {
            b++;
        }
    }
    if ( a > b ) {
        cout << len - a << endl;
    } else {
        cout << len - b << endl;
    }
    return 0;
}