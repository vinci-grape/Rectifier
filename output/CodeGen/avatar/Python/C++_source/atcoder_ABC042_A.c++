#include <iostream>
#include <vector>

using namespace std;

int main ( ) {
    vector <int> ABC;
    int a, b, c;
    while ( cin >> a >> b >> c ) {
        ABC.push_back ( a );
        ABC.push_back ( b );
        ABC.push_back ( c );
    }
    if ( ABC.size ( ) == 2 and ABC.count ( 5 ) == 2 ) {
        cout << ( 'YES' if sum ( ABC ) == 17 else 'NO' ) << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}