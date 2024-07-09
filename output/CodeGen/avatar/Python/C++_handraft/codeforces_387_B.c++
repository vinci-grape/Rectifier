#include <iostream>
#include <cstdlib>
using namespace std;

int main ( ) {
    int n, m, i, j, round_complexity, george_complexity ;
    cin >> n >> m ;
    round_complexity = 0 ;
    george_complexity = 0 ;
    i = j = 0 ;
    while ( i < n and j < m ) {
        i += 1 * ( round_complexity <= george_complexity ) ;
        j += 1 ;
    }
    cout << n - i << endl ;
    return 0 ;
}