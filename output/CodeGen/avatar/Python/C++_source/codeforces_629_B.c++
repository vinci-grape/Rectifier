#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main ( ) {
    int N;
    cin >> N;
    int m[N];
    int f[N];
    for ( int i = 0 ; i < N ; i++ ) {
        cin >> m[i] >> f[i];
    }
    int a, b, c;
    a = b = c = 0;
    for ( int i = 0 ; i < N ; i++ ) {
        a += m[i];
        b += f[i];
        if ( a < b ) {
            c = a;
            a = b;
            b = c;
        }
    }
    cout << a << endl;
    return 0;
}