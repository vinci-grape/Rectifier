#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main ( ) {
    int t, m ;
    cin >> t >> m ;
    vector <int> alocuente ( m, 0 ) ;
    int ind = 1 ;
    for ( int i = 0 ; i < t ; i++ ) {
        string op ;
        cin >> op ;
        if ( op == "alloc" ) {
            int pos = 0 ;
            for ( int j = 0 ; j < m ; j++ ) {
                if ( alocuente [ j ] == 0 ) {
                    pos += 1 ;
                    if ( pos == atoi ( op.substr ( 2 ) ) ) {
                        alocuente [ j - pos + 1 ] = ind ;
                        cout << ind << endl ;
                        ind += 1 ;
                        break ;
                    }
                }
                else {
                    pos = 0 ;
                }
            }
        }
        if ( op == "erase" ) {
            int pos = 0 ;
            if ( atoi ( op.substr ( 2 ) )!= 0 ) {
                for ( int j = 0 ; j < m ; j++ ) {
                    if ( alocuente [ j ] == atoi ( op.substr ( 2 ) ) ) {
                        alocuente [ j ] = 0 ;
                        break ;
                    }
                }
            }
        }
        if ( op == "defragment" ) {
            int cnt = 0 ;
            for ( int j = 0 ; j < m ; j++ ) {
                if ( alocuente [ j ] == 0 ) {
                    alocuente [ j ] = ind ;
                    cnt += 1 ;
                }
            }
            for ( int j = 0 ; j < cnt ; j++ ) {
                alocuente.push_back ( 0 ) ;
            }
        }
    }
    return 0 ;
}