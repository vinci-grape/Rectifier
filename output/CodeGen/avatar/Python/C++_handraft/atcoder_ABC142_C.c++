#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main ( ) {
    int N;
    cin >> N;
    vector < pair < int, int > > A;
    for ( int i = 0 ; i < N ; i ++ ) {
        int a, b;
        cin >> a >> b;
        A.push_back ( make_pair ( a, b ) );
    }
    sort ( A.begin ( ), A.end ( ), [ ] ( const pair < int, int > &a, const pair < int, int > &b ) { return a.first < b.first; } );
    for ( int i = 0 ; i < N ; i ++ ) {
        cout << A [ i ].first << " " << A [ i ].second << endl;
    }
    return 0;
}