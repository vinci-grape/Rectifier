#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <int> l1;
    for ( int i = 0 ; i < n ; i++ ) {
        int a;
        cin >> a;
        l1.push_back ( a );
    }
    sort ( l1.begin ( ), l1.end ( ) );
    int a = l1 [ n - 1 ];
    int b = l1 [ 0 ];
    if ( a == b ) {
        cout << a - b << " " << ( n ) * ( n - 1 ) / 2 << endl;
    } else {
        int ac = l1.count ( a );
        int bc = l1.count ( b );
        cout << a - b << " " << ac * bc << endl;
    }
    return 0;
}