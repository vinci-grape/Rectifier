#include <iostream>
#include <string>
using namespace std;

int main ( ) {
    int n, k;
    cin >> n >> k;
    string v;
    cin >> v;
    string d[2] = { "LEFT", "RIGHT" };
    bool f = k - 1 < n - k;
    int m = min ( k - 1, n - k );
    string a[m + 1];
    for ( int i = 0 ; i < m ; i++ ) {
        a[i] = d[not f];
    }
    for ( int i = 0 ; i < m ; i++ ) {
        a[i + m] = "PRINT " + v[i];
        a[i + m + 1] = d[f];
    }
    for ( int i = 0 ; i < m + 1 ; i++ ) {
        cout << a[i] << endl;
    }
    return 0;
}