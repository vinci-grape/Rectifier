#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n, k ;
    cin >> n >> k ;
    int * elems = new int [ n ] ;
    for ( int i = 0 ; i < n ; i ++ ) {
        cin >> elems [ i ] ;
    }
    bool all_same = true ;
    for ( int i = 0 ; i < k - 1 ; i ++ ) {
        if ( elems [ i ]!= elems [ i + 1 ] ) {
            all_same = false ;
            break ;
        }
    }
    if ( all_same ) {
        cout << 0 << endl ;
        delete [] elems ;
        return 0 ;
    }
    if ( k == 1 ) {
        cout << - 1 << endl ;
        delete [] elems ;
        return 0 ;
    }
    if (! all_same ( elems + k - 1 ) ) {
        cout << - 1 << endl ;
        delete [] elems ;
        return 0 ;
    }
    int target = elems [ k - 1 ] ;
    int * to_delete = new int [ k - 1 ] ;
    for ( int i = 0 ; i < k - 1 ; i ++ ) {
        if ( elems [ i ]!= target ) {
            to_delete [ i ] = elems [ i ] ;
        }
    }
    while ( to_delete && to_delete [ - 1 ] == target ) {
        to_delete.pop ( ) ;
    }
    cout << to_delete.size ( ) << endl ;
    delete [] elems ;
    delete [] to_delete ;
    return 0 ;
}