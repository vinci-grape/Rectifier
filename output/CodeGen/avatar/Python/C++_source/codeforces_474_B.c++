#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ( ) {
    int r = 1;
    vector <int> L;
    string input;
    cin >> input;
    for ( int k = 0; k < input.size ( ); k++ ) {
        L.push_back ( r );
        r += 1;
    }
    cin >> input;
    for ( int j = 0; j < input.size ( ); j++ ) {
        cout << L [ input.at ( j ) - 1 ] << endl;
    }
    return 0;
}