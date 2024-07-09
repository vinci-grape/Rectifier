#include <iostream>
#include <string>
#include <map>
#include <list>
#include <cmath>
using namespace std;

int main ( ) {
    int n;
    string a[5] = { "10", "100", "1000", "10000", "100000" };
    int new_;
    cin >> n;
    if ( n < 10 ) {
        cout << 10 << endl;
        return 0;
    }
    new_ = 0;
    for ( int i = 0 ; i < 5 ; i++ ) {
        new_ += list<int> ( map<int, int> ( ) ). size ( ) * ( n / a[i] );
        n %= a[i] ;
    }
    cout << new_ << endl;
    return 0;
}