#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <int> lst;
    for ( int i = 0; i < n; i++ ) {
        int x;
        cin >> x;
        lst.push_back ( x );
    }
    sort ( lst.begin ( ), lst.end ( ) );
    reverse ( lst.begin ( ), lst.end ( ) );
    int od = 0;
    int sum = 0;
    bool ok = false;
    for ( int i = 0; i < n; i++ ) {
        if ( lst [ i ] % 2 == 0 ) {
            sum += lst [ i ];
        } else {
            if ( ok || od > 1 ) {
                sum += lst [ i ];
                od -= 1;
                ok = false;
            } else {
                ok = true;
            }
        }
    }
    cout << sum << endl;
    return 0;
}