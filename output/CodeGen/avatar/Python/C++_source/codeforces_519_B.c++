#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    vector <int> a;
    vector <int> b;
    vector <int> c;
    int x = 0;
    int y = 0;
    int z = 0;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        int temp;
        cin >> temp;
        a.push_back ( temp );
    }
    for ( int i = 0; i < n; i++ ) {
        int temp;
        cin >> temp;
        b.push_back ( temp );
    }
    for ( int i = 0; i < n; i++ ) {
        int temp;
        cin >> temp;
        c.push_back ( temp );
    }
    for ( int i = 0; i < n; i++ ) {
        x += a[i];
        y += b[i];
        z += c[i];
    }
    cout << abs ( x - y ) << endl;
    cout << abs ( y - z ) << endl;
    return 0;
}