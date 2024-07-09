#include <iostream>
#include <list>
#include <map>
#include <set>
#include <string>
using namespace std;

int main ( ) {
    int max_level;
    list < int > x;
    list < int > y;
    list < int > z;
    int temp;
    cin >> max_level;
    for ( int i = 0; i < max_level; i++ ) {
        cin >> temp;
        x.push_back ( temp );
    }
    for ( int i = 0; i < max_level; i++ ) {
        cin >> temp;
        y.push_back ( temp );
    }
    x.pop_front ( );
    y.pop_front ( );
    x = set < int > ( x );
    y = set < int > ( y );
    if ( 0 in x ) {
        x.erase ( 0 );
    }
    if ( 0 in y ) {
        y.erase ( 0 );
    }
    z = x.union ( y );
    if ( z.size ( )!= max_level ) {
        cout << "Oh, my keyboard!" << endl;
    } else {
        cout << "I become the guy." << endl;
    }
    return 0;
}