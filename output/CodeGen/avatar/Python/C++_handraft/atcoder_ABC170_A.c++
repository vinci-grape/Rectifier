#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;

int main ( ) {
    list < int > a;
    for ( int i = 0 ; i < 10 ; i++ ) {
        a.push_back ( i );
    }
    int e = 0;
    for ( list < int > :: iterator i = a.begin ( ) ; i!= a.end ( ) ; i++ ) {
        if ( *i == 0 ) {
            cout << e + 1 << endl;
            break;
        }
        e++;
    }
    return 0;
}