#include <iostream>
#include <list>
#include <map>
#include <string>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    list < int > number;
    int h1 = 0;
    int h2 = 0;
    int x = 0;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        int temp;
        cin >> temp;
        if ( temp!= 4 && temp!= 7 ) {
            cout << "NO" << endl;
            x++;
            break;
        }
        if ( i < n / 2 ) {
            h1 += temp;
        } else {
            h2 += temp;
        }
    }
    if (!x ) {
        if ( h1 == h2 ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}