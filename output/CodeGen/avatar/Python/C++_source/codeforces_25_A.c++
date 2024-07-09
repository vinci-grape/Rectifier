#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <int> list;
    for ( int i = 0; i < n; ++i ) {
        int x;
        cin >> x;
        list.push_back ( x % 2 );
    }
    if ( sum ( list ) == 1 ) {
        cout << list.at ( list.size ( ) - 1 ) + 1 << endl;
    } else {
        cout << list.at ( list.size ( ) - 1 ) + 1 << endl;
    }
    return 0;
}