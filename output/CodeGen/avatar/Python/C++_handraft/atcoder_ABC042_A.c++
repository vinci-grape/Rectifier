#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ( ) {
    vector <int> ABC;
    int a, b, c;
    int sum = 0;
    while ( cin >> a >> b >> c ) {
        ABC.push_back ( a );
        ABC.push_back ( b );
        ABC.push_back ( c );
        sum = a + b + c;
    }
    if ( count ( ABC.begin ( ), ABC.end ( ), 5 ) == 2 ) {
        if ( sum == 17) {
            cout << "YES" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
    return 0;
}