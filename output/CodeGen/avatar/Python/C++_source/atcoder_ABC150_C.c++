#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <int> orig ( n );
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> orig[i];
    }
    int p[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> p[i];
    }
    int q[n];
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> q[i];
    }
    int pn = find ( orig.begin ( ), orig.end ( ), p ) - orig.begin ( );
    int qn = find ( orig.begin ( ), orig.end ( ), q ) - orig.begin ( );
    cout << abs ( pn - qn ) << endl;
    return 0;
}