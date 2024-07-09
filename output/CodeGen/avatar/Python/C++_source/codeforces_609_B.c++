#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n, m;
    cin >> n >> m;
    vector <string> lst;
    for ( int i = 0 ; i < n ; i++ ) {
        string s;
        cin >> s;
        lst.push_back ( s );
    }
    map <string, int> l;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( l.find ( lst[i] ) == l.end ( ) ) {
            l [ lst[i] ] = 1;
        }
        else {
            l [ lst[i] ] += 1;
        }
    }
    int res = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( l.find ( lst[i] )!= l.end ( ) ) {
            res += n - i - l [ lst[i] ];
            l [ lst[i] ] -= 1;
        }
        else {
            res += n - i - 1;
        }
    }
    cout << res << endl;
    return 0;
}